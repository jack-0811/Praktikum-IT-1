/**
 * @file mainwindow.cpp
 * @brief The function of main programm
 */
#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include "map.h"
#include "mapio.h"
#include "city.h"
#include "dialognewcity.h"
#include "mapiofileinput.h"
#include "mapionrw.h"
#include "street.h"
#include "dijkstra.h"
#include "dialognewstreet.h"
#include "dialoginfo.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->graphicsView->setScene(&Scene);
    ui->pushTest_Draw_City->hide();
    ui->pushTest_Draw_Map->hide();
    ui->pushTest_Draw_Street->hide();
    ui->pushTest_Dijkstra->hide();
    ui->pushFill_Map->hide();
    Update_Combo();
}

MainWindow::~MainWindow()
{
    delete ui;
}
//actions
void MainWindow::on_actionExit_triggered(){
    close();
}

void MainWindow::on_actionClear_Scene_triggered(){
    Scene.clear();
    Map.clear();
    Update_Combo();
    //ui->actionSave_Map->setEnabled(false);
}

void MainWindow::on_actionTest_Draw_City_triggered(){
    Scene.clear();
    City City1=City("Köln",60,680);
    City City2=City("Aachen",10,700);
    City1.draw(Scene);
    City2.draw(Scene);
}

void MainWindow::on_actionTest_Draw_Map_triggered(){
    Scene.clear();
    Map.clear();
    City *City1=new City("Köln",60,680);
    City *City2=new City("Aachen",10,700);
    City *City3=new City("Dusseldorf",60,630);
    Map.addCity(City1);
    Map.addCity(City2);
    Map.addCity(City3);
    Update_Combo();
    Map.draw(Scene);
}

void MainWindow::on_actionTest_Draw_Street_triggered(){
    Scene.clear();
    Map.clear();
    City *City1=new City("Köln",60,680);
    City *City2=new City("Aachen",10,700);
    City *City3=new City("Dusseldorf",60,630);
    Map.addCity(City1);
    Map.addCity(City2);
    Map.addCity(City3);
    Update_Combo();
    Street *Street1= new Street(City1,City2);
    Street *Street2= new Street(City2,City3);
    Street *Street3= new Street(City1,City3);
    Map.addStreet(Street1);
    Map.addStreet(Street2);
    Map.addStreet(Street3);
    Map.draw(Scene);
}

void MainWindow::on_actionAdd_City_triggered(){
    Dialognewcity diaglog;
    int result;
    result=diaglog.exec();
    if(result==1){
        Map.addCity(diaglog.getCity());
        Update_Combo();
        Map.draw(Scene);

    }
}

void MainWindow::on_actionTest_Dijkstra_triggered(){
    Map.clear();
    Scene.clear();
    MapIo = new MapIoNrw();//this line is very inportant, otherweise the programm will crash!!
    MapIo->fillMap(Map);
    Update_Combo();
    Map.draw(Scene);

    QVector<Street*> path = Dijkstra::search(Map, "Bonn", "Düsseldorf");
    QVector<Street*>::const_iterator is;
    for(is=path.begin();is != path.end();is++)
    {
        qDebug() <<"Street from "<<(*is)->getCity1()->getName()<<" to "<<(*is)->getCity2()->getName()<<"has found";
        (*is)->drawRed(Scene);
    }
}

void MainWindow::on_actionAdd_street_triggered(){
    Dialognewstreet dialog;
    dialog.Update_Combo(Map.getCity());
    int result;
    Street* street;
    do{
        result = dialog.exec();
        if(result == 1)
        {
            street=dialog.getStreet(Map);
            if(street){
                Map.addStreet(street);
                Scene.clear();
                Map.draw(Scene);

            }
        }
    }while(result==1&& !street);
}

void MainWindow::on_actionAbout_triggered(){
    DialogInfo diaglog;
    diaglog.exec();
}

void MainWindow::on_actionLoad_Map_triggered(){
    QString defaultlocation  = "C:/";
    QString File_City  = QFileDialog::getOpenFileName(this, "Open City File",  defaultlocation, "Text files (*.txt)");
    QString File_Street = QFileDialog::getOpenFileName(this, "Open Street File", defaultlocation, "Text files (*.txt)");

    Clear();
    MapIoFileinput* MapInfo;
    MapInfo = new MapIoFileinput(File_City,File_Street);
    MapInfo->fillMap(Map);
    Output();
}

void MainWindow::on_actionSave_Map_triggered(){
    QString defaultlocation  = "C:/";
    QString File_City  = QFileDialog::getSaveFileName(this, "Save City File",  defaultlocation, "Text files (*.txt)");
    QString File_Street = QFileDialog::getSaveFileName(this, "Save Street File", defaultlocation, "Text files (*.txt)");


    MapIoFileinput* MapInfo;
    MapInfo = new MapIoFileinput(File_City,File_Street);
    MapInfo->saveMap(Map,File_City,File_Street);


}
//push
void MainWindow::on_pushTest_Draw_City_clicked(){
    Scene.clear();
    City City1=City("Köln",60,680);
    City City2=City("Aachen",10,700);
    Update_Combo();
    City1.draw(Scene);
    City2.draw(Scene);
}

void MainWindow::on_pushTest_Draw_Map_clicked(){
    Scene.clear();
    Map.clear();
    City *City1=new City("Köln",60,680);
    City *City2=new City("Aachen",10,700);
    City *City3=new City("Dusseldorf",60,630);
    Map.addCity(City1);
    Map.addCity(City2);
    Map.addCity(City3);
    Update_Combo();
    Map.draw(Scene);
}

void MainWindow::on_pushTest_Draw_Street_clicked(){
    Scene.clear();
    Map.clear();
    City *City1=new City("Köln",60,680);
    City *City2=new City("Aachen",10,700);
    City *City3=new City("Dusseldorf",60,630);
    Map.addCity(City1);
    Map.addCity(City2);
    Map.addCity(City3);
    Update_Combo();
    Street *Street1= new Street(City1,City2);
    Street *Street2= new Street(City2,City3);
    Street *Street3= new Street(City1,City3);
    Map.addStreet(Street1);
    Map.addStreet(Street2);
    Map.addStreet(Street3);
    Map.draw(Scene);
}

void MainWindow::on_pushAdd_City_clicked(){
    Dialognewcity diaglog;
    int result;
    result=diaglog.exec();
    if(result==1){
        Map.addCity(diaglog.getCity());
        Update_Combo();
        Map.draw(Scene);

    }
}

void MainWindow::on_pushFill_Map_clicked(){
    Map.clear();
    Scene.clear();
    MapIo = new MapIoNrw();//this line is very inportant, otherweise the programm will crash!!
    MapIo->fillMap(Map);
    Update_Combo();
    Map.draw(Scene);
}

void MainWindow::on_pushTest_Dijkstra_clicked(){
    Map.clear();
    Scene.clear();
    MapIo = new MapIoNrw();//this line is very inportant, otherweise the programm will crash!!
    MapIo->fillMap(Map);
    Update_Combo();
    Map.draw(Scene);

    QVector<Street*> path = Dijkstra::search(Map, "Bonn", "Düsseldorf");
    QVector<Street*>::const_iterator is;
    for(is=path.begin();is != path.end();is++)
    {
        qDebug() <<"Street from "<<(*is)->getCity1()->getName()<<" to "<<(*is)->getCity2()->getName()<<"has found";
        (*is)->drawRed(Scene);
    }
}

void MainWindow::on_pushConfirm_clicked(){
    Scene.clear();
    Map.draw(Scene);
    QVector<Street*> path = Dijkstra::search(Map, ui->comboCity1->currentText(), ui->comboCity2->currentText());
    QVector<Street*>::const_iterator is;
    for(is=path.begin();is != path.end();is++)
    {
        qDebug() <<"Street from "<<(*is)->getCity1()->getName()<<" to "<<(*is)->getCity2()->getName()<<"has found";
        (*is)->drawRed(Scene);
    }
}

void MainWindow::on_pushAdd_Street_clicked(){
    Dialognewstreet dialog;
    dialog.Update_Combo(Map.getCity());
    int result;
    Street* street;
    do{
        result = dialog.exec();
        if(result == 1)
        {
            street=dialog.getStreet(Map);
            if(street){
               Map.addStreet(street);
               Scene.clear();
               Map.draw(Scene);

            }
        }
    }while(result==1&& !street);
}

//check
void MainWindow::on_checkTest_Mode_clicked(){
    if(ui->checkTest_Mode->isChecked()){
        ui->pushTest_Draw_City->show();
        ui->pushTest_Draw_Map->show();
        ui->pushTest_Draw_Street->show();
        ui->pushTest_Dijkstra->show();
        ui->pushFill_Map->show();
        ui->actionTest_Draw_City->setEnabled(true);
        ui->actionTest_Draw_Map->setEnabled(true);
        ui->actionTest_Draw_Street->setEnabled(true);
        ui->actionTest_Dijkstra->setEnabled(true);
    }
    else{
        ui->actionTest_Draw_City->setEnabled(false);
        ui->actionTest_Draw_Map->setEnabled(false);
        ui->actionTest_Draw_Street->setEnabled(false);
        ui->actionTest_Dijkstra->setEnabled(false);
        ui->pushTest_Draw_City->hide();
        ui->pushTest_Draw_Map->hide();
        ui->pushTest_Draw_Street->hide();
        ui->pushTest_Dijkstra->hide();
        ui->pushFill_Map->hide();
    }
}

void MainWindow::Update_Combo(){
    //update combo data
    ui->comboCity1->clear();
    ui->comboCity2->clear();
    QVector<City*> Copy_City_List;
    Copy_City_List=Map.getCity();
    QVector<City*>::const_iterator i;
    for(i=Copy_City_List.begin();i !=Copy_City_List.end();i++){
        ui->comboCity1->addItem((*i)->getName());
        ui->comboCity2->addItem((*i)->getName());
    }
}

void MainWindow::Output() {
    Update_Combo();
    Map.draw(Scene);
}

void MainWindow::Clear() {
    Scene.clear();
    Map.clear();
}

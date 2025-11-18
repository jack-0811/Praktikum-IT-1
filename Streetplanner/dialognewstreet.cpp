#include "dialognewstreet.h"
#include "ui_dialognewstreet.h"

#include "street.h"
Dialognewstreet::Dialognewstreet(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialognewstreet)
{
    ui->setupUi(this);
}

Dialognewstreet::~Dialognewstreet()
{
    delete ui;
}


Street* Dialognewstreet::getStreet(Map map) const{

    QString city1Name = ui->City1->currentText();
    QString city2Name = ui->City2->currentText();
    if(city1Name != city2Name){
        City* city1 = map.findCity(city1Name);
        City* city2 = map.findCity(city2Name);

        if (city1 && city2 ) {
            return new Street(city1, city2);
        } else {
        return nullptr;
        }
    }
    else{
        return nullptr;
    }
}

void Dialognewstreet::Update_Combo(QVector<City*> list){
    //update combo data
    ui->City1->clear();
    ui->City2->clear();
    // AbstractMap::City_List Copy_City_List;
    // Copy_City_List=list;
    QVector<City*>::const_iterator i;
    for(i=list.begin();i !=list.end();i++){
        ui->City1->addItem((*i)->getName());
        ui->City2->addItem((*i)->getName());
    }
}

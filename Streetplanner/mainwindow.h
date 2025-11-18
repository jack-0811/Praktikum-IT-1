#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QDebug>
#include <QFileDialog>
#include <QMessageBox>
#include <QLabel>

#include "map.h"
#include "mapio.h"


/**
 * @brief The Head files of main function
 *
 */
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
    /**
     * @brief on_actionExit_triggered is used to exit the programm
     */
    void on_actionExit_triggered();

    /**
     * @brief on_actionClear_Scene_triggered is used to clear the Scene
     */
    void on_actionClear_Scene_triggered();

    /**
     * @brief on_actionTest_Draw_City_triggered is used to draw 2 cities on the map
     */
    void on_actionTest_Draw_City_triggered();

    /**
     * @brief on_actionTest_Draw_Map_triggered is used to draw a map with 3 cities
     */
    void on_actionTest_Draw_Map_triggered();

    /**
     * @brief on_actionTest_Draw_Street_triggered is used to draw 3 streets connected between 3 cities
     */
    void on_actionTest_Draw_Street_triggered();

    /**
     * @brief on_actionAdd_City_triggered is used to add the city
     */
    void on_actionAdd_City_triggered();


    /**
     * @brief on_pushTest_Draw_City_clicked is used to draw 2 cities on the map
     */
    void on_pushTest_Draw_City_clicked();

    /**
     * @brief on_pushTest_Draw_Map_clicked is used to draw a map with 3 cities
     */
    void on_pushTest_Draw_Map_clicked();

    /**
     * @brief on_pushTest_Draw_Street_clicked is used to draw 3 streets connected between 3 cities
     */
    void on_pushTest_Draw_Street_clicked();

    /**
     * @brief on_checkTest_Mode_clicked is used to turn on test Mode or turn off it
     */
    void on_checkTest_Mode_clicked();

    /**
     * @brief on_pushAdd_City_clicked is used to add the city
     */
    void on_pushAdd_City_clicked();

    /**
     * @brief on_pushFill_Map_clicked is used to fill the map with NRW main Cities
     */
    void on_pushFill_Map_clicked();

    /**
     * @brief on_actionTest_Dijkstra_triggered is used to test Dijkstra
     */
    void on_actionTest_Dijkstra_triggered();

    /**
     * @brief on_pushTest_Dijkstra_clicked is used to test Dijkstra
     */
    void on_pushTest_Dijkstra_clicked();

    /**
     * @brief on_pushConfirm_clicked is used to confirm the data from user input and also run the Dijkstra arithmetic
     */
    void on_pushConfirm_clicked();

    /**
     * @brief on_pushAdd_Street_clicked is used to add a new street
     */
    void on_pushAdd_Street_clicked();

    /**
     * @brief on_actionAdd_street_triggered is used to add a new street
     */
    void on_actionAdd_street_triggered();

    /**
     * @brief Update_Combo is used to Update the Combo-element in the UI
     */
    void Update_Combo();

    /**
     * @brief on_actionAbout_triggered is used to show infoUI
     */
    void on_actionAbout_triggered();

    /**
     * @brief on_actionLoad_Map_triggered is used to load the map from user computer
     */
    void on_actionLoad_Map_triggered();

    /**
     * @brief on_actionSave_Map_triggered is used to save the map into user computer
     */
    void on_actionSave_Map_triggered();

    /**
     * @brief Output: The standard output programm include update combo and draw the scene
     */
    void Output();

    /**
     * @brief Clear: The standard clear programm include clear the information in Map and also clear the Scene
     */
    void Clear();
private:
    /**
     * @brief Created ui
     */
    Ui::MainWindow *ui;

    /**
     * @brief Created a scene named Scene to draw on
     */
    QGraphicsScene Scene;

    /**
     * @brief Created a map named Map
     */
    Map Map;

    /**
     * @brief Include the mapinfomation with city and streets
     */
    MapIo* MapIo;
};
#endif // MAINWINDOW_H

/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAdd_City;
    QAction *actionAdd_street;
    QAction *actionFill_the_map_with_NRW;
    QAction *actionClear_the_map;
    QAction *actionLoad_Map;
    QAction *actionSave_Map;
    QAction *actionExit;
    QAction *actionClear_Scene;
    QAction *actionAbout;
    QAction *actionTest_Draw_City;
    QAction *actionTest_Draw_Map;
    QAction *actionTest_Draw_Street;
    QAction *actionTest_Dijkstra;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QPushButton *pushConfirm;
    QLabel *labelFindRouteBetween;
    QPushButton *pushAdd_Street;
    QGraphicsView *graphicsView;
    QLabel *labelCity2;
    QLabel *labelCity1;
    QComboBox *comboCity1;
    QPushButton *pushTest_Draw_Map;
    QPushButton *pushTest_Dijkstra;
    QSpacerItem *verticalSpacer;
    QPushButton *pushTest_Draw_Street;
    QPushButton *pushTest_Draw_City;
    QPushButton *pushFill_Map;
    QComboBox *comboCity2;
    QCheckBox *checkTest_Mode;
    QPushButton *pushAdd_City;
    QSpacerItem *verticalSpacer_2;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuTest;
    QMenu *menuScene;
    QMenu *menuInfo;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(638, 580);
        actionAdd_City = new QAction(MainWindow);
        actionAdd_City->setObjectName("actionAdd_City");
        actionAdd_street = new QAction(MainWindow);
        actionAdd_street->setObjectName("actionAdd_street");
        actionFill_the_map_with_NRW = new QAction(MainWindow);
        actionFill_the_map_with_NRW->setObjectName("actionFill_the_map_with_NRW");
        actionClear_the_map = new QAction(MainWindow);
        actionClear_the_map->setObjectName("actionClear_the_map");
        actionLoad_Map = new QAction(MainWindow);
        actionLoad_Map->setObjectName("actionLoad_Map");
        actionLoad_Map->setEnabled(true);
        actionSave_Map = new QAction(MainWindow);
        actionSave_Map->setObjectName("actionSave_Map");
        actionSave_Map->setEnabled(true);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName("actionExit");
        actionClear_Scene = new QAction(MainWindow);
        actionClear_Scene->setObjectName("actionClear_Scene");
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName("actionAbout");
        actionTest_Draw_City = new QAction(MainWindow);
        actionTest_Draw_City->setObjectName("actionTest_Draw_City");
        actionTest_Draw_City->setEnabled(false);
        actionTest_Draw_Map = new QAction(MainWindow);
        actionTest_Draw_Map->setObjectName("actionTest_Draw_Map");
        actionTest_Draw_Map->setEnabled(false);
        actionTest_Draw_Street = new QAction(MainWindow);
        actionTest_Draw_Street->setObjectName("actionTest_Draw_Street");
        actionTest_Draw_Street->setEnabled(false);
        actionTest_Dijkstra = new QAction(MainWindow);
        actionTest_Dijkstra->setObjectName("actionTest_Dijkstra");
        actionTest_Dijkstra->setEnabled(false);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        pushConfirm = new QPushButton(centralwidget);
        pushConfirm->setObjectName("pushConfirm");

        gridLayout->addWidget(pushConfirm, 6, 0, 1, 1);

        labelFindRouteBetween = new QLabel(centralwidget);
        labelFindRouteBetween->setObjectName("labelFindRouteBetween");

        gridLayout->addWidget(labelFindRouteBetween, 0, 0, 1, 1);

        pushAdd_Street = new QPushButton(centralwidget);
        pushAdd_Street->setObjectName("pushAdd_Street");

        gridLayout->addWidget(pushAdd_Street, 9, 0, 1, 1);

        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName("graphicsView");

        gridLayout->addWidget(graphicsView, 1, 1, 19, 1);

        labelCity2 = new QLabel(centralwidget);
        labelCity2->setObjectName("labelCity2");

        gridLayout->addWidget(labelCity2, 4, 0, 1, 1);

        labelCity1 = new QLabel(centralwidget);
        labelCity1->setObjectName("labelCity1");

        gridLayout->addWidget(labelCity1, 2, 0, 1, 1);

        comboCity1 = new QComboBox(centralwidget);
        comboCity1->setObjectName("comboCity1");

        gridLayout->addWidget(comboCity1, 3, 0, 1, 1);

        pushTest_Draw_Map = new QPushButton(centralwidget);
        pushTest_Draw_Map->setObjectName("pushTest_Draw_Map");
        pushTest_Draw_Map->setEnabled(true);

        gridLayout->addWidget(pushTest_Draw_Map, 16, 0, 1, 1);

        pushTest_Dijkstra = new QPushButton(centralwidget);
        pushTest_Dijkstra->setObjectName("pushTest_Dijkstra");
        pushTest_Dijkstra->setEnabled(true);

        gridLayout->addWidget(pushTest_Dijkstra, 18, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer, 19, 0, 1, 1);

        pushTest_Draw_Street = new QPushButton(centralwidget);
        pushTest_Draw_Street->setObjectName("pushTest_Draw_Street");
        pushTest_Draw_Street->setEnabled(true);

        gridLayout->addWidget(pushTest_Draw_Street, 17, 0, 1, 1);

        pushTest_Draw_City = new QPushButton(centralwidget);
        pushTest_Draw_City->setObjectName("pushTest_Draw_City");
        pushTest_Draw_City->setEnabled(true);

        gridLayout->addWidget(pushTest_Draw_City, 15, 0, 1, 1);

        pushFill_Map = new QPushButton(centralwidget);
        pushFill_Map->setObjectName("pushFill_Map");

        gridLayout->addWidget(pushFill_Map, 14, 0, 1, 1);

        comboCity2 = new QComboBox(centralwidget);
        comboCity2->setObjectName("comboCity2");

        gridLayout->addWidget(comboCity2, 5, 0, 1, 1);

        checkTest_Mode = new QCheckBox(centralwidget);
        checkTest_Mode->setObjectName("checkTest_Mode");

        gridLayout->addWidget(checkTest_Mode, 11, 0, 1, 1);

        pushAdd_City = new QPushButton(centralwidget);
        pushAdd_City->setObjectName("pushAdd_City");

        gridLayout->addWidget(pushAdd_City, 8, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 7, 0, 1, 1);

        gridLayout->setColumnStretch(1, 1);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 638, 26));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName("menuFile");
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName("menuEdit");
        menuTest = new QMenu(menubar);
        menuTest->setObjectName("menuTest");
        menuScene = new QMenu(menubar);
        menuScene->setObjectName("menuScene");
        menuInfo = new QMenu(menubar);
        menuInfo->setObjectName("menuInfo");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuScene->menuAction());
        menubar->addAction(menuTest->menuAction());
        menubar->addAction(menuInfo->menuAction());
        menuFile->addAction(actionLoad_Map);
        menuFile->addAction(actionSave_Map);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuEdit->addAction(actionAdd_City);
        menuEdit->addAction(actionAdd_street);
        menuEdit->addSeparator();
        menuTest->addAction(actionTest_Draw_City);
        menuTest->addAction(actionTest_Draw_Map);
        menuTest->addAction(actionTest_Draw_Street);
        menuTest->addAction(actionTest_Dijkstra);
        menuScene->addAction(actionClear_Scene);
        menuInfo->addAction(actionAbout);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Street Planner", nullptr));
        actionAdd_City->setText(QCoreApplication::translate("MainWindow", "Add city", nullptr));
#if QT_CONFIG(shortcut)
        actionAdd_City->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionAdd_street->setText(QCoreApplication::translate("MainWindow", "Add street", nullptr));
#if QT_CONFIG(shortcut)
        actionAdd_street->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionFill_the_map_with_NRW->setText(QCoreApplication::translate("MainWindow", "Fill the map with NRW", nullptr));
        actionClear_the_map->setText(QCoreApplication::translate("MainWindow", "Clear the map", nullptr));
        actionLoad_Map->setText(QCoreApplication::translate("MainWindow", "Load Map", nullptr));
#if QT_CONFIG(shortcut)
        actionLoad_Map->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave_Map->setText(QCoreApplication::translate("MainWindow", "Save Map", nullptr));
#if QT_CONFIG(shortcut)
        actionSave_Map->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
#if QT_CONFIG(shortcut)
        actionExit->setShortcut(QCoreApplication::translate("MainWindow", "Alt+E", nullptr));
#endif // QT_CONFIG(shortcut)
        actionClear_Scene->setText(QCoreApplication::translate("MainWindow", "Clear Scene", nullptr));
#if QT_CONFIG(shortcut)
        actionClear_Scene->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Y", nullptr));
#endif // QT_CONFIG(shortcut)
        actionAbout->setText(QCoreApplication::translate("MainWindow", "About", nullptr));
        actionTest_Draw_City->setText(QCoreApplication::translate("MainWindow", "Test Draw City", nullptr));
#if QT_CONFIG(shortcut)
        actionTest_Draw_City->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+1", nullptr));
#endif // QT_CONFIG(shortcut)
        actionTest_Draw_Map->setText(QCoreApplication::translate("MainWindow", "Test Draw Map", nullptr));
#if QT_CONFIG(shortcut)
        actionTest_Draw_Map->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+2", nullptr));
#endif // QT_CONFIG(shortcut)
        actionTest_Draw_Street->setText(QCoreApplication::translate("MainWindow", "Test Draw Street", nullptr));
#if QT_CONFIG(shortcut)
        actionTest_Draw_Street->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+3", nullptr));
#endif // QT_CONFIG(shortcut)
        actionTest_Dijkstra->setText(QCoreApplication::translate("MainWindow", "Test Dijkstra", nullptr));
#if QT_CONFIG(shortcut)
        actionTest_Dijkstra->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+4", nullptr));
#endif // QT_CONFIG(shortcut)
        pushConfirm->setText(QCoreApplication::translate("MainWindow", "Confirm", nullptr));
        labelFindRouteBetween->setText(QCoreApplication::translate("MainWindow", "Find Shortest Route Between", nullptr));
        pushAdd_Street->setText(QCoreApplication::translate("MainWindow", "Add Street", nullptr));
        labelCity2->setText(QCoreApplication::translate("MainWindow", "City 2", nullptr));
        labelCity1->setText(QCoreApplication::translate("MainWindow", "City 1", nullptr));
#if QT_CONFIG(tooltip)
        pushTest_Draw_Map->setToolTip(QCoreApplication::translate("MainWindow", "Draw a map with 3 cities", nullptr));
#endif // QT_CONFIG(tooltip)
        pushTest_Draw_Map->setText(QCoreApplication::translate("MainWindow", "Draw Map", nullptr));
        pushTest_Dijkstra->setText(QCoreApplication::translate("MainWindow", "Test Dijkstra", nullptr));
#if QT_CONFIG(tooltip)
        pushTest_Draw_Street->setToolTip(QCoreApplication::translate("MainWindow", "Draw 3 streets connected between 3 cities", nullptr));
#endif // QT_CONFIG(tooltip)
        pushTest_Draw_Street->setText(QCoreApplication::translate("MainWindow", "Draw Street", nullptr));
#if QT_CONFIG(tooltip)
        pushTest_Draw_City->setToolTip(QCoreApplication::translate("MainWindow", "Draw two cities on the map", nullptr));
#endif // QT_CONFIG(tooltip)
        pushTest_Draw_City->setText(QCoreApplication::translate("MainWindow", "Draw City", nullptr));
        pushFill_Map->setText(QCoreApplication::translate("MainWindow", "Fill Map", nullptr));
        checkTest_Mode->setText(QCoreApplication::translate("MainWindow", "Test Mode", nullptr));
        pushAdd_City->setText(QCoreApplication::translate("MainWindow", "Add City", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        menuTest->setTitle(QCoreApplication::translate("MainWindow", "Test", nullptr));
        menuScene->setTitle(QCoreApplication::translate("MainWindow", "Scene", nullptr));
        menuInfo->setTitle(QCoreApplication::translate("MainWindow", "Info", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

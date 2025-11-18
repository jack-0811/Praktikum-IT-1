/********************************************************************************
** Form generated from reading UI file 'dialoginfo.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGINFO_H
#define UI_DIALOGINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogInfo
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *DialogInfo)
    {
        if (DialogInfo->objectName().isEmpty())
            DialogInfo->setObjectName("DialogInfo");
        DialogInfo->resize(394, 115);
        verticalLayout = new QVBoxLayout(DialogInfo);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(DialogInfo);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        label_2 = new QLabel(DialogInfo);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);


        retranslateUi(DialogInfo);

        QMetaObject::connectSlotsByName(DialogInfo);
    } // setupUi

    void retranslateUi(QDialog *DialogInfo)
    {
        DialogInfo->setWindowTitle(QCoreApplication::translate("DialogInfo", "About", nullptr));
        label->setText(QCoreApplication::translate("DialogInfo", "This App is made by Yiqi Cao ", nullptr));
        label_2->setText(QCoreApplication::translate("DialogInfo", "Used for SS24 Praktikum Infomatik Aufgabe 9", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogInfo: public Ui_DialogInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGINFO_H

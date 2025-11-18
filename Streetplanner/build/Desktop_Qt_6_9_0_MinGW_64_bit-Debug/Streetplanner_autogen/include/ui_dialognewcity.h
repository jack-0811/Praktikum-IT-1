/********************************************************************************
** Form generated from reading UI file 'dialognewcity.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGNEWCITY_H
#define UI_DIALOGNEWCITY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_Dialognewcity
{
public:
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label;
    QSpinBox *x;
    QDialogButtonBox *buttonBox;
    QLineEdit *CityName;
    QSpinBox *y;

    void setupUi(QDialog *Dialognewcity)
    {
        if (Dialognewcity->objectName().isEmpty())
            Dialognewcity->setObjectName("Dialognewcity");
        Dialognewcity->resize(317, 150);
        gridLayout = new QGridLayout(Dialognewcity);
        gridLayout->setObjectName("gridLayout");
        label_2 = new QLabel(Dialognewcity);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        label_3 = new QLabel(Dialognewcity);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 2, 2, 1, 1);

        label = new QLabel(Dialognewcity);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        x = new QSpinBox(Dialognewcity);
        x->setObjectName("x");
        x->setMinimum(-10000);
        x->setMaximum(10000);

        gridLayout->addWidget(x, 2, 1, 1, 1);

        buttonBox = new QDialogButtonBox(Dialognewcity);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 3, 0, 1, 4);

        CityName = new QLineEdit(Dialognewcity);
        CityName->setObjectName("CityName");

        gridLayout->addWidget(CityName, 0, 1, 1, 3);

        y = new QSpinBox(Dialognewcity);
        y->setObjectName("y");
        y->setMinimum(-10000);
        y->setMaximum(10000);

        gridLayout->addWidget(y, 2, 3, 1, 1);


        retranslateUi(Dialognewcity);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, Dialognewcity, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, Dialognewcity, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(Dialognewcity);
    } // setupUi

    void retranslateUi(QDialog *Dialognewcity)
    {
        Dialognewcity->setWindowTitle(QCoreApplication::translate("Dialognewcity", "Add new City", nullptr));
        label_2->setText(QCoreApplication::translate("Dialognewcity", "Location: x", nullptr));
        label_3->setText(QCoreApplication::translate("Dialognewcity", "y", nullptr));
        label->setText(QCoreApplication::translate("Dialognewcity", "Cityname", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialognewcity: public Ui_Dialognewcity {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGNEWCITY_H

/********************************************************************************
** Form generated from reading UI file 'dialognewstreet.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGNEWSTREET_H
#define UI_DIALOGNEWSTREET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_Dialognewstreet
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *City2;
    QLabel *label_2;
    QComboBox *City1;
    QDialogButtonBox *buttonBox;
    QLabel *label_3;

    void setupUi(QDialog *Dialognewstreet)
    {
        if (Dialognewstreet->objectName().isEmpty())
            Dialognewstreet->setObjectName("Dialognewstreet");
        Dialognewstreet->resize(454, 113);
        gridLayout = new QGridLayout(Dialognewstreet);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setHorizontalSpacing(10);
        gridLayout->setVerticalSpacing(8);
        label = new QLabel(Dialognewstreet);
        label->setObjectName("label");

        gridLayout->addWidget(label, 1, 0, 1, 1);

        City2 = new QComboBox(Dialognewstreet);
        City2->setObjectName("City2");

        gridLayout->addWidget(City2, 1, 3, 1, 1);

        label_2 = new QLabel(Dialognewstreet);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 2, 1, 1);

        City1 = new QComboBox(Dialognewstreet);
        City1->setObjectName("City1");

        gridLayout->addWidget(City1, 1, 1, 1, 1);

        buttonBox = new QDialogButtonBox(Dialognewstreet);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 2, 3, 1, 1);

        label_3 = new QLabel(Dialognewstreet);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 0, 0, 1, 3);

        gridLayout->setColumnStretch(1, 1);
        gridLayout->setColumnStretch(3, 1);
        gridLayout->setColumnMinimumWidth(1, 1);
        gridLayout->setColumnMinimumWidth(3, 1);

        retranslateUi(Dialognewstreet);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, Dialognewstreet, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, Dialognewstreet, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(Dialognewstreet);
    } // setupUi

    void retranslateUi(QDialog *Dialognewstreet)
    {
        Dialognewstreet->setWindowTitle(QCoreApplication::translate("Dialognewstreet", "Add new Street", nullptr));
        label->setText(QCoreApplication::translate("Dialognewstreet", "City1", nullptr));
        label_2->setText(QCoreApplication::translate("Dialognewstreet", "City2", nullptr));
        label_3->setText(QCoreApplication::translate("Dialognewstreet", "Add new street between two cities", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialognewstreet: public Ui_Dialognewstreet {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGNEWSTREET_H

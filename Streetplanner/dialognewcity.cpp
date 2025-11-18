#include "dialognewcity.h"
#include "ui_dialognewcity.h"

Dialognewcity::Dialognewcity(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialognewcity)
{
    ui->setupUi(this);
}

Dialognewcity::~Dialognewcity()
{
    delete ui;
}

City* Dialognewcity::getCity() const{
    QString name=ui->CityName->text();
    return new City(name,ui->x->value(),ui->y->value());
}


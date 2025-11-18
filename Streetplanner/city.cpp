/**
 * @file city.cpp
 * @brief The function used to create city on the map
 *
 */

#include "city.h"
#define Dot_Radius 2

City::City(QString name,int x,int y):name(name),x(x),y(y) {
    qDebug()<<"The City-"<<name<<", located in "<<x<<", "<<y<<" has been created.";
}

City::~City(){
    qDebug()<<"The City-"<<name<<", located in "<<x<<", "<<y<<" has been deleted.";
}

int City::getX() const{
    return x;
}

int City::getY() const{
    return y;
}

QString City::getName() const{
    return name;
}

void City::draw(QGraphicsScene& scene) const{
    //draw the name
    QGraphicsTextItem *text = new QGraphicsTextItem(name);
    qreal width=text->boundingRect().width();
    text->setPos(x-width/2,y);
    scene.addItem(text);
   /*
    QLabel *label=new QLabel();
    label->setText(name);
    label->setAlignment(Qt::AlignCenter);
    label->setGeometry(x,y,100,50);
    label->show();
    */
    //draw a circle on the scene
    scene.addEllipse(x-Dot_Radius,y-Dot_Radius,Dot_Radius*2,Dot_Radius*2,QPen(Color),QBrush(Color));

    qDebug()<<"The City-"<<name<<", located in "<<x<<", "<<y<<" has been drawed.";
}

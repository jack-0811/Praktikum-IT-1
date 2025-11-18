#include "street.h"

Street::Street(City* city1,City*city2):city1(city1),city2(city2) {
    qDebug()<<"The Street between"<<city1->getName()<<"and"<<city2->getName()<<" has been created.";
}

Street::~Street(){
    qDebug()<<"The Street between"<<city1->getName()<<"and"<<city2->getName()<<" has been deleted.";
}

void Street::draw(QGraphicsScene &scene) const{
    scene.addLine(city1->getX(),city1->getY(),city2->getX(),city2->getY(),QPen(QColor(0,84,159)));
    qDebug()<<"The Street between"<<city1->getName()<<"and"<<city2->getName()<<" has been drawed.";
}

void Street::drawRed(QGraphicsScene &scene) const{
    scene.addLine(city1->getX(),city1->getY(),city2->getX(),city2->getY(),QPen(QColor(204,7,30)));
    qDebug()<<"The Street(Red) between"<<city1->getName()<<"and"<<city2->getName()<<" has been drawed.";
}

City* Street::getCity1() const{
    return city1;
}

City* Street::getCity2() const{
    return city2;
}

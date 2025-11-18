#include "map.h"

Map::Map() {
    qDebug()<<"The map has been created.";
}

Map::~Map(){
    /*
    // delete all the cities
    for(auto city : City_onList){
        delete city;
    }
    City_onList.clear();
    qDebug() << "The cities has been deleted.";

    // deleter all the streets
    for(auto street : Street_onList){
        delete street;
    }
    Street_onList.clear();
    qDebug() << "The streets has been deleted.";
    */
}

void Map::addCity(City* city){
    City_onList.push_back(city);
}

void Map::draw(QGraphicsScene &scene)  {
    scene.clear();

    QVector<City*>::const_iterator i;
    for(i=City_onList.begin();i !=City_onList.end();i++){
        (*i)->draw(scene);
    }

    QVector<Street*>::const_iterator is;
    for(is=Street_onList.begin();is !=Street_onList.end();is++){
        (*is)->draw(scene);
    }
}

bool Map::addStreet(Street* street){
    qDebug()<<"The Road between"<<street->getCity1()->getName()<<"and"<<street->getCity2()->getName();
    QString city1Name = street->getCity1()->getName();
    QString city2Name = street->getCity2()->getName();

    bool city1Found = false;
    bool city2Found = false;
    for (const auto& city : City_onList) {
        if (city->getName() == city1Name) {
            city1Found = true;
        }
        if (city->getName() == city2Name) {
            city2Found = true;
        }
    }

    if (city1Found && city2Found) {
        qDebug()<<"The two cities are on the list";
        Street_onList.push_back(street);
        return true;
    }
    else {
        qDebug()<<"Error:One or two cities are not on the list!";
        return false;
    }
}//只能根据名称来查找，不能根据地址
    // if((find(City_onList.begin(),City_onList.end(),street->getCity1())!=City_onList.end())&&(find(City_onList.begin(),City_onList.end(),street->getCity2())!=City_onList.end())){
    //     qDebug()<<"The two cities are on the list";
    //     Street_onList.push_back(street);
    //     return true;
    // }
    // else{
    //     qDebug()<<"Error:One or two cities are not on the list!";
    //     return false;
    // }


City* Map::findCity(const QString city_name) const
{
    for (const auto& city : City_onList) {
        if (city->getName() == city_name) {
            return city;
        }
    }
    return NULL;
}

QVector<Street*> Map::getStreetList(const City* city) const{
    QVector<Street*> StreetRelated;
    QVector<Street*>::const_iterator is;
    for(is=Street_onList.begin();is !=Street_onList.end();is++){
        if((*is)->getCity1()==city || (*is)->getCity2()==city)
        {
            StreetRelated.push_back(*is);
        }
    }
    return StreetRelated;
}

City* Map::getOppositeCity(const Street* street, const City* city) const{
    if(street->getCity1()==city){
        return street->getCity2();
    }
    else if(street->getCity2()==city){
        return street->getCity1();
    }
    else{
        return NULL;
    }
}

double Map::getLength(const Street* street) const{
    City* city1=street->getCity1();
    City* city2=street->getCity2();
    double x1=city1->getX();
    double y1=city1->getY();
    double x2=city2->getX();
    double y2=city2->getY();
    double length=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    return length;
}

QVector<City*> Map::getCity() const{
    return City_onList;
}

void Map::clear(){
        // clear the street first!!
        for(auto street : Street_onList){
            delete street;
        }
        Street_onList.clear();
        qDebug() << "The streets has been deleted.";

        // clear the city after!!
        for(auto city : City_onList){
            delete city;
        }
        City_onList.clear();
        qDebug() << "The cities has been deleted.";
}


// copy function
Map::Map(const Map& other) {
    // copy the list of city
    for (auto city : other.City_onList) {
        City_onList.push_back(new City(*city));
    }

    // copy the list of street
    for (auto street : other.Street_onList) {
        Street_onList.push_back(new Street(*street));
    }
}

// overload
Map& Map::operator=(const Map& other) {
    if (this != &other) { // check whether it has value
        // clear city and strees in the map
        clear();

        //copy city list
        for (auto city : other.City_onList) {
            City_onList.push_back(new City(*city));
        }

        // copy street list
        for (auto street : other.Street_onList) {
            Street_onList.push_back(new Street(*street));
        }
    }
    return *this;
}

/*
   void Map::clear() const{
         //delete all the cities
         City_List::const_iterator i;
         for(i=City_onList.begin();i !=City_onList.end();i++){
             delete(*i);
         }
         qDebug()<<"The cities has been deleted.";

         //delete all the streets
         Street_List::const_iterator is;
         for(is=Street_onList.begin();is !=Street_onList.end();is++){
             delete(*is);
         }

         qDebug()<<"The streets has been deleted.";
}
 调用 Map::clear() 函数后程序崩溃的原因可能是由于在 Map::clear() 函数中删除了指向已经清理的对象的指针。当你调用 delete 删除指针指向的对象后，该指针变为悬空指针（dangling pointer），再次使用它可能导致未定义的行为，甚至引发崩溃
*/

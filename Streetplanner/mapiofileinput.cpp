///////////////////////////////////////////////////////////////////////////////
// Praktikum Informatik 1 MMXXIV
// Versuch 9
//////////////////////////////////////////////////////////////////////////////

#include "mapiofileinput.h"

#include <sstream>
#include <fstream>
#include <QDebug>
#include <QFile>
#include <QIODevice>
#include <QTextStream>

#define CITY_EXTENSION false
#define STREET_EXTENSION false

#if CITY_EXTENSION
#include "bigtown.h"
#include "smalltown.h"
#endif
#if STREET_EXTENSION
#include "motorway.h"
#include "stateroad.h"
#endif



MapIoFileinput::MapIoFileinput(QString pathToCityFile, QString pathToStreetFile):
    pathToCityFile(pathToCityFile),
    pathToStreetFile(pathToStreetFile)
{

}

MapIoFileinput::~MapIoFileinput()
{

}

void MapIoFileinput::fillMap(AbstractMap &map)
{
    QString line;
    QString name;
    QString xPositionString;
    QString yPositionString;
    QString firstCityName;
    QString secondCityName;
#if CITY_EXTENSION
    QString cityTyp;
#endif

#if STREET_EXTENSION
    QString streetTyp;
#endif

    int xPosition, yPosition;
    QFile cityFile(pathToCityFile);
    QFile streetFile(pathToStreetFile);

    if (!cityFile.open(QIODevice::ReadOnly)) {
        qDebug() << "Failed to open city file: " << pathToCityFile;
        return;
    }

    if (!streetFile.open(QIODevice::ReadOnly)) {
        qDebug() << "Failed to open street file: " << pathToStreetFile;
        return;
    }

    // Using a String Stream to split the string into the single words.
    QTextStream input(&cityFile);

    // Read in City File
    while(!input.atEnd())
    {
        input >> name;
        input >> xPositionString;
        input >> yPositionString;

#if CITY_EXTENSION
        input >> cityTyp;
#endif

        // Convert the strings into Integers
        xPosition = xPositionString.toInt();
        yPosition = yPositionString.toInt();

        City *city;

#if CITY_EXTENSION
        if (cityTyp.compare("BigTown") == 0)
        {
            city = new BigTown(name, xPosition, yPosition);
        }
        else
        {
            city = new SmallTown(name, xPosition, yPosition);
        }
#else
        city = new City(name, xPosition, yPosition);
#endif
        map.addCity(city);
        input.readLine();
    }

    QTextStream inputStreet(&streetFile);

    // Read in Street File
    while (!inputStreet.atEnd())
    {
        inputStreet >> firstCityName;
        inputStreet >> secondCityName;
#if STREET_EXTENSION
        inputStreet >> streetTyp;
#endif

        City* city1 = map.findCity(firstCityName);
        City* city2 = map.findCity(secondCityName);

        if (!city1) {
            qDebug() << "Failed to create Street. First city not found Data: " << line;
        }
        if (!city2) {
            qDebug() << "Failed to create Street. Second city not found Data: " << line;
        }

        Street *street;

#if STREET_EXTENSION
        if (streetTyp.compare("Motorway") == 0)
        {
            street = new Motorway(city1, city2);
        }
        else
        {
            street = new Stateroad(city1, city2);
        }
#else
        street = new Street(city1, city2);
#endif

        bool success = map.addStreet(street);
        if (success == false)
        {
            qDebug() << "Failed to create Street. Data: " << line;
        }
        inputStreet.readLine();
    }

    streetFile.close();
    cityFile.close();

}


void MapIoFileinput::saveMap(Map &map, QString CityFile, QString StreetFile) {
    std::string City_file_String = CityFile.toStdString();
    std::string Street_file_String = StreetFile.toStdString();

    // create a temp map for saving
    Map tempMap;

    // copy data into temp map,so that it will not affect the primary map
    for (auto it = map.City_onList.begin(); it != map.City_onList.end(); ++it) {
        tempMap.addCity(new City((*it)->getName(), (*it)->getX(), (*it)->getY()));
    }

    for (auto it = map.Street_onList.begin(); it != map.Street_onList.end(); ++it) {
        City* city1 = tempMap.findCity((*it)->getCity1()->getName());
        City* city2 = tempMap.findCity((*it)->getCity2()->getName());
        if (city1 && city2) {
            tempMap.addStreet(new Street(city1, city2));
        }
    }

    // open file
    std::ofstream City_file_Output(City_file_String.c_str());
    std::ofstream Street_file_Output(Street_file_String.c_str());

    if (!City_file_Output.is_open()) {
        qDebug() << "Failed to open city file for writing: " << CityFile;
        return;
    }

    if (!Street_file_Output.is_open()) {
        qDebug() << "Failed to open street file for writing: " << StreetFile;
        City_file_Output.close();
        return;
    }

    // output data into file
    for (auto it = tempMap.City_onList.begin(); it != tempMap.City_onList.end(); ++it) {
        City_file_Output << (*it)->getName().toStdString() << " " << (*it)->getX() << " " << (*it)->getY() << std::endl;
    }

    for (auto it = tempMap.Street_onList.begin(); it != tempMap.Street_onList.end(); ++it) {
        Street_file_Output << (*it)->getCity1()->getName().toStdString() << " " << (*it)->getCity2()->getName().toStdString() << std::endl;
    }

    // close file
    City_file_Output.close();
    Street_file_Output.close();
}

/*
void MapIoFileinput::fillMap(AbstractMap &Map){
    string City_File_translated(CityFile.toStdString());
    string Street_File_translated(StreetFile.toStdString());
    string Line, City_Name, x, y;//for city file
    string city1Name, city2Name;//for street file
    int x_position, y_position;
    ifstream City_file(City_File_translated.c_str());
    ifstream Street_file(Street_File_translated.c_str());
    if (!City_file.is_open()) {
        qDebug() << "Failed to open city file: " << CityFile;
        return;
    }

    if (!Street_file.is_open()) {
        qDebug() << "Failed to open street file: " << StreetFile;
        return;
    }

    while (getline(City_file, Line))
    {
        //spilt the line into words
        stringstream Line_stream(Line);
        Line_stream >> City_Name;
        Line_stream >> x;
        Line_stream >> y;
        x_position = atoi(x.c_str());
        y_position = atoi(y.c_str());
        City* City_created = new City(QString::fromStdString(City_Name), x_position, y_position);
        Map.addCity(City_created);
    }

    while (getline(Street_file, Line))
    {
        stringstream Line_stream(Line);
        Line_stream >> city1Name;
        Line_stream >> city2Name;

        if(city1Name != city2Name){
            City* city1 = Map.find_city(QString::fromStdString(city1Name));
            City* city2 = Map.find_city(QString::fromStdString(city2Name));

            if (city1 && city2 ) {
                Street* Street_created= new Street(city1, city2);
                Map.addStreet(Street_created);
            } else {
                return;
            }
        }
        else{
            return;
        }
    }

    Street_file.close();
    City_file.close();
}

void MapIoFileinput::saveMap(Map &map, QString CityFile, QString StreetFile) {
    string City_file_String = CityFile.toStdString();
    string Street_file_String = StreetFile.toStdString();

    // File out streams
    ofstream City_file_Output, Street_file_Output;
    City_file_Output.open(City_file_String.c_str());
    Street_file_Output.open(Street_file_String.c_str());

    if (!City_file_Output.is_open()) {
        qDebug() << "Failed to open city file: " << CityFile;
        return;
    }

    if (!Street_file_Output.is_open()) {
        qDebug() << "Failed to open street file: " << StreetFile;
        return;
    }

    // Write in City File
    for (auto it = map.City_onList.begin(); it != map.City_onList.end(); ++it) {
        City_file_Output << (*it)->getName().toStdString() << " " << (*it)->getX() << " " << (*it)->getY();
        City_file_Output << std::endl;
    }

    // Write in Street File
    for (auto it = map.Street_onList.begin(); it != map.Street_onList.end(); ++it) {
        Street_file_Output << (*it)->getCity1()->getName().toStdString() << " " << (*it)->getCity2()->getName().toStdString();
        Street_file_Output << std::endl;
    }

    Street_file_Output.close();
    City_file_Output.close();
}
*/

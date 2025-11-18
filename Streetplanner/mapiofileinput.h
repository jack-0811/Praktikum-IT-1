///////////////////////////////////////////////////////////////////////////////
// Praktikum Informatik 1 MMXXIV
// Versuch 9
//////////////////////////////////////////////////////////////////////////////

#ifndef MAPIOFILEINPUT_H
#define MAPIOFILEINPUT_H

#include "map.h"
#include "mapio.h"

class MapIoFileinput : public MapIo
{
public:
    MapIoFileinput(QString pathToCityFile, QString pathToStreetFile);
    ~MapIoFileinput();

    virtual void fillMap(AbstractMap &map);

    /**
     * @brief saveMap: Save the data from the Map class
     * @param Map: The Map class let the data flow out
     * @param CityFile: The CityFile needed to write on
     * @param StreetFile: The StreetFile needed to write on
     */
    virtual void saveMap(Map &Map, QString CityFile,QString StreetFile);

protected:
    QString pathToCityFile;
    QString pathToStreetFile;
};

#endif // MAPIOFILEINPUT_H

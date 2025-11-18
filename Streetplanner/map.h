#ifndef MAP_H
#define MAP_H
#include <vector>
#include <algorithm>

#include "city.h"
#include "abstractmap.h"
#include "street.h"



/**
 * @brief The map class save all the street and citys on the map
 */
class Map:public AbstractMap
{
public:
    /**
     * @brief Map: The default constructor of Map
     */
    Map();
    ~Map();

    /**
     * @brief City_onList: Represents all the cities on the list
     */
    QVector<City*> City_onList;

    /**
     * @brief Street_onList:Represents all the streets on the list
     */
    QVector<Street*> Street_onList;

    /**
     * @brief Adds the provided city to this map.
     * @param Pointer to city to be added
     */
    virtual void addCity(City* city);

    /**
     * @brief draw: Draw the city on the scene
     * @param scene-the scene need to draw on
     */
    virtual void draw(QGraphicsScene& scene);

    /**
     * @brief Adds the provided street to this map. If the cities linked by the street
     *  have not been added to this map before, the street is not added.
     * @param Pointer to the street to be added
     * @return true if the street has beed added.
     */
    virtual bool addStreet(Street* street);

    /**
     * @brief Search for a city in this map by given name.
     * @param name
     * @return the city pointer, if city not found nullptr
     */
    virtual City* findCity(const QString city_name) const;

    /**
     * @brief Search for streets in this map.
     * @param city where you want the street_list from
     * @return A list of all streets in this map connected to provided city.
     */
    virtual QVector<Street*> getStreetList(const City* city) const;

    /**
     * @brief Look for opposite city.
     * @param street
     * @param city
     * @return Opposite city of the street. If city has no connection to street returns nullptr.
     */
    virtual City* getOppositeCity(const Street* street, const City* city) const;

    /**
     * @brief Calculate the street length.
     * @param street
     * @return Length of the street
     */
    virtual double getLength(const Street* street) const;


    /**
     * @brief getCity: Get all the City on the List
     * @return All the City on the List
     */
    virtual QVector<City*> getCity() const;

    /**
     * @brief clear: Clear all the cities and streets in the Map
     */
    void clear();

    /**
     * @brief Map: Copy the map as Constructor
     * @param other : the Map needed to be copy
     */
    Map(const Map& other);

    /**
     * @brief operator = Use to Copy map by override =
     * @param other: the Map needed to be copy
     * @return the Map after copy
     */
    Map& operator=(const Map& other); // 赋值运算符重载函数


};

#endif // MAP_H

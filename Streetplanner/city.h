#ifndef CITY_H
#define CITY_H

#include<QDebug>
#include <QGraphicsScene>
#include <QGraphicsTextItem>

/**
 * @brief The City class used to create city on the map
 *
 */

class City
{
public:
    /**
     * @brief City: Used to construct the City class
     * @param name : the name of the city
     * @param x : the x-coordinate of the city
     * @param y : the y-coordinate of the city
     */
    City(QString name, int x, int y);

    /**
     * @brief ~City : The standard destructor of the city
     */
    virtual ~City();

    /**
     * @brief draw: Draw the city on the screen
     * @param scene : The QGraphicsScene to draw on
     */
    virtual void draw(QGraphicsScene &scene) const;

    /**
     * @brief getName: get the name of the city
     * @return The name of the city
     */
    QString getName() const;

    /**
     * @brief getX: Get x-coordinate of the city
     * @return x-coordinate
     */
    int getX() const;

    /**
     * @brief getY: Get y-coordinate of the city
     * @return y-coordinate
     */
    int getY() const;

protected:
    /**
     * @brief The x-coordinate of the city
     */
    int x;

    /**
     * @brief The y-coordinate of the city
     */
    int y;

    /**
     * @brief The name of the city
     */
    QString name;

    /**
     * @brief The color of the dot
     */
    const QColor Color=QColor(246,168,0);


};

#endif // CITY_H

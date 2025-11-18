#ifndef STREET_H
#define STREET_H

#include "city.h"

class Street
{
public:
    /**
     * @brief Street: The standard Street constructor with 2 cities as the start and the end
     * @param city1: The first City as start
     * @param city2: The second City as end
     */
    Street(City* city1,City*city2);
    ~Street();

    /**
     * @brief draw: Draw the blue line on the Screen as the represent of road
     * @param scene: The Scene to draw on
     */
    void draw(QGraphicsScene &scene) const;

    /**
     * @brief draw: Draw the red line on the Screen as the represent of road that find by Dijkstra
     * @param scene: The Scene to draw on
     */
    void drawRed(QGraphicsScene &scene) const;

    /**
     * @brief getCity1: get the city1 infomation
     * @return City1 address
     */
    City* getCity1() const;

    /**
     * @brief getCity2: get the city2 infomation
     * @return City2 address
     */
    City* getCity2() const;

protected:
    /**
     * @brief city1: The first City as start
     */
    City* city1;

    /**
     * @brief city2: The second City as end
     */
    City* city2;
};

#endif // STREET_H

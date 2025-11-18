#ifndef DIALOGNEWSTREET_H
#define DIALOGNEWSTREET_H

#include <QDialog>
#include "street.h"
#include "abstractmap.h"
#include "map.h"

/**
 *@brief The Dialog used to create the new Street
 */

namespace Ui {
class Dialognewstreet;
}

class Dialognewstreet : public QDialog
{
    Q_OBJECT

public:
    explicit Dialognewstreet(QWidget *parent = nullptr);
    ~Dialognewstreet();

    /**
     * @brief getStreet: Get the new-created Street with two cities that it connects between from user input
     * @param map: The Map with city-information it needs to read from and find them
     * @return The new Street address
     */
    Street* getStreet(Map map) const;

    /**
     * @brief Update_Combo: Use to Update the Combo-element in the UI
     * @param list: The List with all City-information
     */
    void Update_Combo(QVector<City*> list);
private:
    Ui::Dialognewstreet *ui;
};

#endif // DIALOGNEWSTREET_H

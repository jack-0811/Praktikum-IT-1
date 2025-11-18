#ifndef DIALOGNEWCITY_H
#define DIALOGNEWCITY_H

#include "city.h"
#include <QDialog>

/**
 *@brief The Dialog used to create the new City
 */
namespace Ui {
class Dialognewcity;
}

class Dialognewcity : public QDialog
{
    Q_OBJECT

public:
    explicit Dialognewcity(QWidget *parent = nullptr);
    ~Dialognewcity();

    /**
     * @brief getCity: Get the City with its name and x-coordinate, y-coordinate from user input
     * @return the new City-address
     */
    City* getCity() const;
private:
    Ui::Dialognewcity *ui;
};

#endif // DIALOGNEWCITY_H

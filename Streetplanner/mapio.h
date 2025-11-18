///////////////////////////////////////////////////////////////////////////////
// Praktikum Informatik 1 MMXXIV
// Versuch 9
//////////////////////////////////////////////////////////////////////////////

#ifndef MAPIO_H
#define MAPIO_H

#include "abstractmap.h"
#include "map.h"

/// This class adds Cities and Streeds to a Map.
class MapIo
{
public:

    /// virtual Destructor
    virtual ~MapIo() = 0;

    /// this method adds Cities and Streets to the provided Map.
    virtual void fillMap(AbstractMap &map) = 0;

    /// this method saves the Cities and Streets to files on the disk.
    virtual void saveMap(Map, QString, QString)
    {
        throw;
    }
};
inline MapIo::~MapIo() {}// Provide an inline definition for the pure virtual destructor

#endif // MAPIO_H

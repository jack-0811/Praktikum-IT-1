/*
 * Magazin.cpp
 *
 *  Created on: Apr 14, 2024
 *      Author: jack0811
 */

#include "Magazin.h"


Magazin::~Magazin() {
	// TODO Auto-generated destructor stub
}

Magazin::Magazin(std::string initTitel, Datum initDatumAusgabe, std::string initSparte):Medium(initTitel), datum(initDatumAusgabe),sparte(initSparte){

}

void Magazin::ausgabe() const{
	 Medium::ausgabe();
	 std::cout << "Ausgabe: " << datum << std::endl;
	 std::cout << "Sparte: "<< sparte <<std::endl;
}

bool Magazin::ausleihen(Person person, Datum ausleihdatum) {
    Datum aktuellesDatum;
    if ((aktuellesDatum - datum) == 0) {
        std::cout << "Dies ist die neueste Ausgabe und kann nicht ausgeliehen werden." << std::endl;
        return false;
    } else {
        return Medium::ausleihen(person, ausleihdatum);
    }
}

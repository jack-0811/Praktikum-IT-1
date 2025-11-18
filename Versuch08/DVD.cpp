/*
 * DVD.cpp
 *
 *  Created on: Apr 14, 2024
 *      Author: jack0811
 */

#include "DVD.h"
/*
DVD::DVD() {
	// TODO Auto-generated constructor stub

}
*/
DVD::~DVD() {
	// TODO Auto-generated destructor stub
}

DVD::DVD(std::string initTitel, int initAltersfreigabe, std::string initGenre):Medium(initTitel),altersfreigabe(initAltersfreigabe),genre(initGenre){

}

void DVD::ausgabe() const{
	Medium::ausgabe();
	std::cout << "FSK: " << altersfreigabe << std::endl;
	std::cout << "Genre: "<< genre <<std::endl;
}

bool DVD::ausleihen(Person person, Datum ausleihdatum) {
	Datum geburtsdatum = person.getGeburtsdatum();
	int alter = (ausleihdatum - geburtsdatum) / 12; // Annahme: Geburtstagsmonat wird ignoriert
	if (alter >= altersfreigabe) {
		return Medium::ausleihen(person, ausleihdatum);
	} else {
		std::cout << "Die Altersbeschränkung wurde nicht erfüllt. Die DVD kann nicht ausgeliehen werden." << std::endl;
		return false;
	}
}

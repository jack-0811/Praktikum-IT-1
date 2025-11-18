/*
 * DVD.h
 *
 *  Created on: Apr 14, 2024
 *      Author: jack0811
 */

#ifndef DVD_H_
#define DVD_H_

#include "Medium.h"
#include "Datum.h"

class DVD: public Medium {
public:
	//DVD();
	virtual ~DVD();
	DVD(std::string initTitel, int initAltersfreigabe, std::string initGenre);
	void ausgabe() const override;
	bool ausleihen(Person person, Datum ausleihdatum) override;

private:
	int altersfreigabe;
	std::string genre;
};

#endif /* DVD_H_ */

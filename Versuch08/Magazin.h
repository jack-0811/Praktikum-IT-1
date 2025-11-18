/*
 * Magazin.h
 *
 *  Created on: Apr 14, 2024
 *      Author: jack0811
 */

#ifndef MAGAZIN_H_
#define MAGAZIN_H_

#include "Medium.h"

class Magazin: public Medium {
public:
	Magazin(std::string initTitel, Datum initDatumAusgabe, std::string initSparte);
	virtual ~Magazin();
	void ausgabe() const override;
	bool ausleihen(Person person, Datum ausleihdatum) override;

private:
	Datum datum;
	std::string sparte;
};

#endif /* MAGAZIN_H_ */

/*
 * Buch.h
 *
 *  Created on: Apr 14, 2024
 *      Author: jack0811
 */

#ifndef BUCH_H_
#define BUCH_H_

#include "Medium.h"

class Buch: public Medium {
public:
	//Buch();
	Buch(std::string initTitel, std::string initAutor);
	virtual ~Buch();
	void ausgabe() const override;

private:
	std::string autor;
};

#endif /* BUCH_H_ */

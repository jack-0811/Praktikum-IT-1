/*
 * Buch.cpp
 *
 *  Created on: Apr 14, 2024
 *      Author: jack0811
 */

#include "Buch.h"
/*
Buch::Buch(): Medium("") {
	// TODO Auto-generated constructor stub

}
*/

Buch::~Buch() {
	// TODO Auto-generated destructor stub
}

Buch::Buch(std::string initTitel, std::string initAutor):Medium(initTitel), autor(initAutor){

}

void Buch::ausgabe() const{
	 Medium::ausgabe();
	 std::cout << "Autor: " << autor << std::endl;
}

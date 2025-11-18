//////////////////////////////////////////////////////////////////////////////
// Praktikum Informatik 1
//
// Versuch 04: Einführung Klasse
//
// Datei:  Vektor.cpp
// Inhalt: Sourcedatei der Klasse Vektor
//////////////////////////////////////////////////////////////////////////////

#include "Vektor.h"

using namespace std;

Vektor::Vektor(double inX, double inY, double inZ) : x(inX), y(inY), z(inZ)
{

}

Vektor::~Vektor()
{

}


/**
 * @brief Function printing the components of the vector
 */
void Vektor::ausgabe() const
{
    std::cout << "X-Komponente: " << x << std::endl;
    std::cout << "Y-Komponente: " << y << std::endl;
    std::cout << "Z-Komponente: " << z << std::endl << std::endl;
}

double Vektor::getX() const
{
	return x;
}

double Vektor::getY() const
{
	return y;
}

double Vektor::getZ() const
{
	return z;
}

Vektor Vektor::sub(const Vektor& input) const
{
	return Vektor(x-input.x,y-input.y,z-input.z);
}

double Vektor::laenge() const
{
	double dLength=sqrt(x*x+y*y+z*z);
	return dLength;
}

double Vektor::skalarProd(const Vektor& input) const
{
	return (input.x*x+input.y*y+input.z*z);
}

double Vektor::winkel(const Vektor& input) const
{
	double dLengthv1=input.laenge();
	double dLengthv2=laenge();
	double angle=acos(skalarProd(input)/(dLengthv1*dLengthv2));
	return angle;
}

void Vektor::rotiereUmZ(const double rad)
{
	double dNewx=x*cos(rad)-y*sin(rad);
	double dNewy=x*sin(rad)+y*cos(rad);
	x = dNewx;
	y = dNewy;
}

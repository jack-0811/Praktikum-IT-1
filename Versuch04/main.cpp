//////////////////////////////////////////////////////////////////////////////
// Praktikum Informatik 1 MMXXIV
// Versuch 04: Einführung Klasse
//
// Datei:  main.cpp
// Inhalt: Hauptprogramm
//////////////////////////////////////////////////////////////////////////////
#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
#include "Vektor.h"

#define Earthradius 6371
#define Platformheight 555.7
#define Humanheight 1.7
#define Changeangle 0.0000001
#define PI 3.141592653589
using namespace std;

int main()
{
	Vektor Earth = Vektor(0, Earthradius, 0);
	Vektor Human = Vektor(0, (Earthradius*1000+Platformheight+Humanheight)/1000, 0);
	Vektor Sight = Earth.sub(Human);
	int n;
	double dRad = 0;

	do
	{
		dRad += Changeangle;
		Earth.rotiereUmZ(Changeangle);
		Sight = Human.sub(Earth);
		n++;
	}while(!(Sight.winkel(Earth)>=PI/2));

	double dDistance=Sight.laenge();
	double dDegree = dRad * 180 / PI;

	cout<<fixed;
	cout<<"Sie können "<<setprecision(4)<<dDistance<<" Km weit sehen."<<endl;
	cout<<"Sie sind " <<setprecision(4)<<Platformheight<<" Meter hoch"<<endl;
	cout<<"Der Winkel beträgt "<<setprecision(4)<<dDegree<<" Grad"<<endl;
	cout<<"Anzahl Schritte:"<<n<<endl;
	return 0;
}

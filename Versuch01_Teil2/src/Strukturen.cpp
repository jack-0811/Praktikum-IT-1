/////////////////////////////////////////////////////////////////////////////
// Praktikum Informatik 1 MMXXIV
// Versuch 1.2: Strukturen
//
// Datei:  Strukturen.cpp
// Inhalt: Hauptprogramm
//////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>
using namespace std;

struct Person {
	string sNachname;
	string sVorname;
	int iGeburtsjahr;
	int iAlter;
};

int main() {
	Person nBenutzer;
	cout<<"Bitte geben sie Nachname ein:";
	cin>>nBenutzer.sNachname;
	cout<<"Bitte geben sie Vorname ein:";
	cin>>nBenutzer.sVorname;
	cout<<"Bitte geben sie Geburtsjahr ein:";
	cin>>nBenutzer.iGeburtsjahr;
	cout<<"Bitte geben sie Alter ein:";
	cin>>nBenutzer.iAlter;

	cout<<"--Der Benutzer Datei--"<<endl;
	cout<<"Nachname:"<<nBenutzer.sNachname<<endl;
	cout<<"Vorname:"<<nBenutzer.sVorname<<endl;
	cout<<"Geburtsjahr:"<<nBenutzer.iGeburtsjahr<<endl;
	cout<<"Alter:"<<nBenutzer.iAlter<<endl;

	Person nKopieEinzeln;
	Person nKopieGesamt;

	nKopieEinzeln.sNachname=nBenutzer.sNachname;
	nKopieEinzeln.sVorname=nBenutzer.sVorname;
	nKopieEinzeln.iGeburtsjahr=nBenutzer.iGeburtsjahr;
	nKopieEinzeln.iAlter=nBenutzer.iAlter;

	nKopieGesamt = nBenutzer;

	cout<<"--KopeiEinzeln Datei--"<<endl;
	cout<<"Nachname:"<<nKopieEinzeln.sNachname<<endl;
	cout<<"Vorname:"<<nKopieEinzeln.sVorname<<endl;
	cout<<"Geburtsjahr:"<<nKopieEinzeln.iGeburtsjahr<<endl;
	cout<<"Alter:"<<nKopieEinzeln.iAlter<<endl;

	cout<<"--KopieGesamt Datei--"<<endl;
	cout<<"Nachname:"<<nKopieGesamt.sNachname<<endl;
	cout<<"Vorname:"<<nKopieGesamt.sVorname<<endl;
	cout<<"Geburtsjahr:"<<nKopieGesamt.iGeburtsjahr<<endl;
	cout<<"Alter:"<<nKopieGesamt.iAlter<<endl;

	return 0;
}

//////////////////////////////////////////////////////////////////////////////
// Praktikum Informatik 1
//
// Versuch 1.1: Datentypen und Typumwandlung
//
// Datei:  Variablen.cpp
// Inhalt: Hauptprogramm
//////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>
using namespace std;

int main()
{
	 int iErste = 0;
	 int iZweite = 0;

	//1.
	int iSumme,iQuotient;
	cout<<"Bitte geben sie die erste Zahl ein:";
	cin>>iErste;
	cout<<"Bitte geben sie die zweite Zahl ein:";
	cin>>iZweite;
	iSumme=iErste+iZweite;
	iQuotient = iErste / iZweite;
	cout<<"iSumme="<<iSumme<<endl;
	cout<<"iQuotient="<<iQuotient<<endl;

	//2.
	double dSumme,dQuotient;
	dSumme=iErste+iZweite;
	dQuotient=iErste/iZweite;
	cout<<"dSumme="<<dSumme<<endl;
	cout<<"dQuotient="<<dQuotient<<endl;

	//3.
	double dSummeCast,dQuotientCast;
	dSummeCast=(double)iErste+(double)iZweite;
	dQuotientCast=(double)iErste/(double)iZweite;
	cout<<"dSummeCast="<<dSummeCast<<endl;
	cout<<"dQuotientCast="<<dQuotientCast<<endl;

	//4.
	string sVorname,sNachname,sVornameName,sNameVorname;
	cout<<"Bitte geben sie Vorname ein:";
	cin>>sVorname;
	cout<<"Bitte geben Sie Nachnamen ein:";
	cin>>sNachname;
	sVornameName=sVorname+" "+sNachname;
	sNameVorname=sNachname+", "+sVorname;
	cout<<"Vorname Nachname:"<<sVornameName<<endl;
	cout<<"Name, Vorname:"<<sNameVorname<<endl;

	//5.
	{
		//a)
		int iFeld[]={1,2};
		cout<<"iFled:"<<iFeld[0]<<"\t"<<iFeld[1]<<endl;

		//b)
		int spielfeld[2][3] = {{1,2,3}, {4,5,6}};
		cout<<"spielfeld[][]:"<<endl;
		cout<<spielfeld[0][0]<<" "<<spielfeld[0][1]<<" "<<spielfeld[0][2]<<endl;
		cout<<spielfeld[1][0]<<" "<<spielfeld[1][1]<<" "<<spielfeld[1][2]<<endl;

		//c)
		const int iZweite=1;
		cout<<"iZweite(InBlock)="<<iZweite<<endl;
	}

	cout<<"iZweite(AusBlock)="<<iZweite<<endl;

	//6.
	int iName1,iName2;
	iName1=(int)sVorname[0];
	iName2=(int)sVorname[1];
	cout<<"Die Erste Buchstaben des Vornames in Zahl:"<<iName1<<endl;
	cout<<"Die Zweite Buchstaben des Vornames in Zahl:"<<iName2<<endl;

	//7.
	int iName1Position,iName2Position;
	if(iName1>=(int)('a')){
		iName1=iName1-32;
	}
	if(iName2>=(int)('a')){
		iName2=iName2-32;
	}
	iName1Position=(iName1-(int)('A')+1)%26;
	iName2Position=(iName2-(int)('A')+1)%26;
	if (iName1Position==0){
		iName1Position=26;
	}
	if (iName2Position==0){
			iName2Position=26;
		}
	cout<<"Name1Position:"<<iName1Position<<endl;
	cout<<"Name2Position:"<<iName2Position<<endl;
	return 0;
}




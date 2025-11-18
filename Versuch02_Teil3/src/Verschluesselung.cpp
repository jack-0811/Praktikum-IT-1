///////////////////////////////////////////////////////////////////////////////
// Praktikum Informatik 1
//
// Versuch 2.3: Felder
//
// Datei:  Verschuesselung.cpp
// Inhalt: Hauptprogramm
//////////////////////////////////////////////////////////////////////////////

using namespace std;

#include <iostream>
#include <string>

string verschluesseln(char schluessel[2][26], string wort)
{
	for(int i=0;i<int(wort.length());i++) {
		 char currentCharacter=wort[i];
		 //cout << "Verarbeite Zeichen: " << currentCharacter << endl;
		 for(int j=0;j<26;j++) {
		 if(schluessel[0][j]==currentCharacter) {
			 //cout << "Gefunden in Schluessel: " << currentCharacter << " -> " << schluessel[1][j] << endl;
		     wort[i]=schluessel[1][j];
			 break;
			 }
		  }
	 }
	return wort;
}

string entschluesseln(char schluessel[2][26], string wort)
{
	for(int i=0;i<int(wort.length());i++) {
	        char currentCharacter=wort[i];
	        for(int j=0;j<26;j++) {
	            if(schluessel[1][j]==currentCharacter) {
	                wort[i]=schluessel[0][j];
	                break;
	            }
	        }
	    }
	return wort;
}

int main()
{
	char schluessel[2][26] = {
	        {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'},
	        {'M', 'K', 'X', 'Q', 'I', 'B', 'O', 'R', 'V', 'F', 'J', 'N', 'A', 'Y', 'C', 'W', 'L', 'P', 'H', 'Z', 'G', 'S', 'D', 'E', 'T', 'U'}
	    	};
    string Wort;
	cout<<"Bitte geben Sie ein Wort ein:" << endl;
	cin>>Wort;

	string verschluesseltesWort = verschluesseln(schluessel, Wort);
	cout << "Verschlüsselung:" << verschluesseltesWort << endl;
	string entschluesseltesWort = entschluesseln(schluessel, verschluesseltesWort);
	cout << "Entschlüsselung:" << entschluesseltesWort << endl;

	return 0;
}

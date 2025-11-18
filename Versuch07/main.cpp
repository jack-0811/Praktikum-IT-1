/** @mainpage
 *
 * Praktikum Informatik 1 MMXXIV <BR>
 * Versuch 6: Standard Template Library – STL
 *
 */

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <fstream>

#include "Student.h"

bool compare(const Student& student1, const Student& student2) {
    return student1.getMatNr() < student2.getMatNr();
}

std::ostream& operator<<(std::ostream& out, const Student& student) {
    student.ausgabe(out);
    return out;
}

int main()
{
	std::vector<Student> studentenListe;
    Student student;

    char abfrage;
    std::cout << "Wollen Sie die Liste selbst fuellen? (j)/(n) ";
    std::cin >> abfrage;
    std::cin.ignore(10, '\n');

    if (abfrage != 'j')
    {
        student = Student(34567, "Harro Simoneit", "19.06.1971", "Am Markt 1");
        studentenListe.push_back(student);
        student = Student(74567, "Vera Schmitt", "23.07.1982", "Gartenstr. 23");
        studentenListe.push_back(student);
        student = Student(12345, "Siggi Baumeister", "23.04.1983", "Ahornst.55");
        studentenListe.push_back(student);
        student = Student(64567, "Paula Peters", "9.01.1981", "Weidenweg 12");
        studentenListe.push_back(student);
        student = Student(23456, "Walter Rodenstock", "15.10.1963", "W�llnerstr.9");
        studentenListe.push_back(student);
    }

    do
    {
        std::cout << "\nMenue:" << std::endl
                  << "-----------------------------" << std::endl
                  << "(1): Datenelement hinten hinzufuegen" << std::endl
                  << "(2): Datenelement vorne entfernen" << std::endl
                  << "(3): Datenbank ausgeben" << std::endl
				  << "(4): Datenbank in umgekehrter Reihenfolge ausgeben"<< std::endl
				  << "(5): Datenelement löschen"<<std::endl
        		  << "(6): Datenelement vorne hinzufügen"<<std::endl
				  << "(7): Daten aus einer Datei einlesen"<<std::endl
				  << "(8): Daten in eine Datei sichern"<<std::endl
				  << "(9): Daten sortieren"<<std::endl
                  << "(0): Beenden" << std::endl;
        std::cin >> abfrage;
        std::cin.ignore(10, '\n');

        switch (abfrage)
        {
            // Datenelement hinten hinzufuegen
            case '1':
                {
                    unsigned int matNr = 0;
                    std::string name = "";
                    std::string geburtstag = "";
                    std::string adresse = "";

                    std::cout << "Bitte geben sie die Daten f�r den Studenten ein.\nName: ";
                    getline(std::cin, name);    // ganze Zeile einlesen inklusive aller Leerzeichen

                    std::cout << "Geburtsdatum: ";
                    getline(std::cin, geburtstag);

                    std::cout << "Adresse: ";
                    getline(std::cin, adresse);

                    std::cout << "Matrikelnummer: ";
                    std::cin >> matNr;
                    std::cin.ignore(10, '\n');

                    student = Student(matNr, name, geburtstag, adresse);

                    studentenListe.push_back(student);
                    std::cout << "Student "<< student << " ist eingefügt" << std::endl;
                }
                break;

            // Datenelement vorne entfernen
            case '2':
                {
                    if(!studentenListe.empty())
                    {
                        std::cout << "Der folgende Student ist geloescht worden:" << std::endl;
                        std::cout << *studentenListe.begin();
                        studentenListe.erase(studentenListe.begin());
                    }
                    else
                    {
                        std::cout << "Die Liste ist leer!\n";
                    }
                }
                break;

            // Datenbank vorwaerts ausgeben
            case '3':
                if(!studentenListe.empty())
                {
                    std::cout << "Inhalt der Liste in fortlaufender Reihenfolge:" << std::endl;
                    for (auto it = studentenListe.begin(); it != studentenListe.end(); it++) {
                          std::cout<<*it;
                    }
                }
                else
                {
                    std::cout << "Die Liste ist leer!\n\n";
                }
                break;

            case '0':
                std::cout << "Das Programm wird nun beendet";
                break;

            default :
                std::cout << "Falsche Eingabe, bitte nochmal";
                break;

            case '4':
            	if(!studentenListe.empty())
				{
					std::cout << "Inhalt der Liste in umgekehrter Reihenfolge:" << std::endl;
					for (auto rit = studentenListe.rbegin(); rit != studentenListe.rend(); rit--) {
					       std::cout<<*rit;
					}
				}
				else
				{
					std::cout << "Die Liste ist leer!\n\n";
				}
				break;

            case '5':
            {
            	/*
            	std::cout << "Bitte geben sie die Matriculationnummer für den Studenten ein.\nMatriculationnummer: ";
            	unsigned int smatNr = 0;
            	std::cin >> smatNr;
            	std::cin.ignore(10, '\n');
            	for (auto it = studentenListe.begin(); it != studentenListe.end(); it++) {
            		if(it->getMatNr()==smatNr){
            			std::cout << "Student "<< it << " ist gelöscht" << std::endl;
            			studentenListe.erase(it);

            		}
            	}
            }
            	break;
            	 */
            	std::cout << "Bitte geben sie die Matriculationnummer für den Studenten ein.\nMatriculationnummer: ";
            	unsigned int smatNr = 0;
            	std::cin >> smatNr;
            	std::cin.ignore(10, '\n');
            	//
            	auto it = std::find_if(studentenListe.begin(), studentenListe.end(), [smatNr](const Student& student) {
            	    return student.getMatNr() == smatNr;
            	});
            	//
            	if (it != studentenListe.end()) {
            	std::cout << "Gefundener Student zum Löschen:\n";
            	std::cout << *it << std::endl;
            	studentenListe.erase(it);
            	std::cout << "Student erfolgreich gelöscht.\n";
				} else {
					std::cout << "Student mit Matrikelnummer " << smatNr << " nicht gefunden.\n";
				}
            }
            	break;
            case '6':
            {
            	unsigned int matNr = 0;
				std::string name = "";
				std::string geburtstag = "";
				std::string adresse = "";

				std::cout << "Bitte geben sie die Daten f�r den Studenten ein.\nName: ";
				getline(std::cin, name);    // ganze Zeile einlesen inklusive aller Leerzeichen

				std::cout << "Geburtsdatum: ";
				getline(std::cin, geburtstag);

				std::cout << "Adresse: ";
				getline(std::cin, adresse);

				std::cout << "Matrikelnummer: ";
				std::cin >> matNr;
				std::cin.ignore(10, '\n');

				student = Student(matNr, name, geburtstag, adresse);

				studentenListe.insert(studentenListe.begin(),student);
				std::cout << "Student "<<student << " ist eingefügt" << std::endl;

            	break;
            }
            case '7':
            {
            	unsigned int matNr = 0;
				std::string name = "";
				std::string geburtstag = "";
				std::string adresse = "";

            	std::ifstream eingabe ("studenten.txt");
            	if (! eingabe )
            	{
            	std :: cout << " Fehler beim Oeffnen der Datei !";
            	exit (1) ;
            	}

            	while(!eingabe.eof())
            	{
            	eingabe >> matNr ;
            	eingabe.ignore(10, '\n');
            	std::getline(eingabe,name);
            	std::getline(eingabe,geburtstag);
            	std::getline(eingabe,adresse);
            	if (!eingabe.fail())
            	    {
            		student = Student(matNr, name, geburtstag, adresse);
            		studentenListe.insert(studentenListe.end(),student);
            		std::cout << "Student "<<student << " ist eingefügt" << std::endl;
            	    }
            	}
            	std::cout << "Es sind keine weiteren Daten vorhanden."<<std::endl;
            	break;
            }
            case '8':
            {
            	std::ofstream ausgabe;
            	ausgabe.open("studenten_output.txt");
            	for(auto it=studentenListe.begin();it!=studentenListe.end();it++){
            		ausgabe << it->getMatNr() << std::endl ;
            		ausgabe << it->getName() << std::endl ;
            		ausgabe << it->getGeburtstag() << std::endl ;
            		ausgabe << it->getAdresse() << std::endl;
            	}
            	ausgabe.close();
            	std::cout << "Daten sind in 'studenten_output.txt' sichern."<<std::endl;
            	break;
            }
            case '9':
            {
            	 std::sort(studentenListe.begin(), studentenListe.end(), compare);
            	 std::cout << "Studentenliste nach dem Sortieren:\n";
            	 for (auto it=studentenListe.begin();it!=studentenListe.end();it++) {
            	    std::cout << *it << std::endl;
            	 }
            	break;
            }
        }
    }
    while (abfrage != '0');

    return 0;
}

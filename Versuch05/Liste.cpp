//////////////////////////////////////////////////////////////////////////////
// Praktikum Informatik 1 MMXXIV
//////////////////////////////////////////////////////////////////////////////

#include "Liste.h"

/**
 * @brief Standardkonstruktor, der eine leere Liste erstellt
 */
Liste::Liste(): front(nullptr), back(nullptr)
{
}

/**
 * @brief Hinzufuegen eines neuen Listenelements am Ende der Liste.
 *
 * @param pData Zeiger auf ein Objekt der Klasse Student
 * @return void
 */
void Liste::pushBack(Student pData)
{
    ListenElement* neuesElement = new ListenElement(pData, nullptr, back);

    if (front == nullptr)                                       // Liste leer?
    {
        front = neuesElement;
        back = neuesElement;
    }
    else
    {
        back->setNext(neuesElement);
        back = neuesElement;
    }
}

void Liste::pushFront(Student pData)
{
    ListenElement* neuesElement = new ListenElement(pData, front, nullptr);

    if (front == nullptr)                                       // Liste leer?
    {
        front = neuesElement;
        back = neuesElement;
    }
    else
    {
        front->setPrev(neuesElement);
        front = neuesElement;
    }
}

/**
 * @brief Entfernen eines Listenelements am Anfang der Liste.
 *
 * @return void
 */
void Liste::popFront()
{
    ListenElement* cursor = front;

    if (front == back)                                       // Liste enthält nur ein Listenelement
    {
        delete front;                                        // Listenelement löschen
        front = nullptr;
        back = nullptr;
    }
    else
    {
        front = front->getNext();
        if (front != nullptr) {
         front->setPrev(nullptr);
         }
        else {
         back = nullptr;
         }
        delete cursor;
    }
}

/**
 * @brief Pruefen, ob die Liste leer ist
 *
 * @return wenn leer true, sonst false
 */
bool Liste::empty()
{
    if(front == nullptr)
    {
        return true;
    }
    return false;
}

/**
 * @brief Gibt die Daten des ersten Listenelements in der Liste zurueck
 *
 * @return Zeiger auf ein Objekt der Klasse Student
 */
Student Liste::dataFront()
{
    return front->getData();
}

/**
 * @brief Ausgabe der Liste vom ersten bis zum letzten Element.
 *
 * @return void
 */
void Liste::ausgabeVorwaerts() const
{
    ListenElement* cursor = front;

    while (cursor != nullptr)
    {
    	cursor->getData().ausgabe();
        cursor = cursor->getNext();
    }
}

void Liste::ausgabeBackwaerts() const
{
    ListenElement* cursor = back;

    while (cursor != nullptr)
    {
    	cursor->getData().ausgabe();
        cursor = cursor->getPrev();
    }
}

ListenElement* Liste::getFront() const
{
    return front;
}

ListenElement* Liste::getBack() const
{
    return back;
}

void Liste::deleteDurchmatNr(unsigned int matriculationNumber) {
    if (front == nullptr) {
        std::cout << "Die Liste ist leer." << std::endl;
        return;
    }

    ListenElement* current = front;
    ListenElement* previous = nullptr;

    while (current != nullptr) {
        if (current->getData().getMatNr() == matriculationNumber) {
            if (current == front) {
                front = current->getNext();
                if (front != nullptr) {
                    front->setPrev(nullptr);
                } else {
                    back = nullptr;
                }
            } else if (current == back) {
                back = previous;
                back->setNext(nullptr);
            } else {
                previous->setNext(current->getNext());
                current->getNext()->setPrev(previous);
            }

            std::cout << "Student mit Matrikelnummer " << matriculationNumber << " wurde erfolgreich gelöscht." << std::endl;
            std::cout << "Gelöschte Studentendaten: Name: " << current->getData().getName() << ", Matrikelnummer: " << current->getData().getMatNr() << std::endl;
            delete current;
            return;
        }
        previous = current;
        current = current->getNext();
    }

    std::cout << "Student mit Matrikelnummer " << matriculationNumber << " wurde nicht gefunden." << std::endl;
}

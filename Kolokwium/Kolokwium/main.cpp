/*
* Autor: Marcin Kowalczyk
*/
#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include "Bryla.h"
#include "Kula.h"
#include "Stozek.h"
#include "Geometria.h"

using namespace std;

int main()
{
    /*
    zadanie 5 w razie co
    Jednostka jednostka1("cm");
    Jednostka jednostka2("m");
    Bryla* kulaMoja = new Kula(jednostka1, 6);
    Bryla* stozekMoj = new Stozek(jednostka2, 2.25, 6.75);

    cout << kulaMoja->opis();
    cout << stozekMoj->opis();
    */
    cout << "Kolokwium z C++" << endl;
    cout << endl << "---------------------------------------" << endl;
    cout << "Zadanie dodatkowe" << endl;
    cout << endl << "---------------------------------------" << endl;
    Jednostka jednostka1("cm");
    Jednostka jednostka2("m");
    Bryla* kula = new Kula(jednostka1, 4.25);
    Bryla* kula1 = new Kula(jednostka1, 6);
    Bryla* kula2 = new Kula(jednostka2, 4);
    Bryla* stozek = new Stozek(jednostka1, 3.25, 6);
    Bryla* stozek1 = new Stozek(jednostka1, 3.21, 5);
    cout << "Dodanie 5 bryl do klasy Geometria " << endl;
    Geometria geometria(5);
    geometria.dodaj(kula);
    geometria.dodaj(kula1);
    geometria.dodaj(kula2);
    geometria.dodaj(stozek);
    geometria.dodaj(stozek1);
    cout << "Ilosc bryl: " << geometria.getIlosc() << endl;
    cout << "Opis bryl: " << endl;
    cout << geometria.opis() << endl;
    cout << "Proba Usuniecia 2 bryl z geometrii, jedna jest dobra, 2 ma wywolac wyjatek " << endl;
    geometria.usun(2);
    cout << "Usunieto kule o id = 2" << endl;
    geometria.usun(6);
    cout << "Ilosc figur: " << geometria.getIlosc() << endl;
    Bryla* stozek2 = new Stozek(jednostka1, 7, 2.5);
    cout << "Dodanie 1 figury do klasy Geometria " << endl;
    geometria.dodaj(stozek2);
    cout << "Ilosc figur: " << geometria.getIlosc() << endl;
    cout << "----------------------------------------" << endl;
    cout << geometria.opis() << endl;
    cout << "Proba dodania bryly do geometrii, ktora ma wywolac wyjatek " << endl;
    Bryla* kula3 = new Kula(jednostka1, 3);
    geometria.dodaj(kula3);
    //cout << "Obliczanie minimalnej objetosci kuli wartosc to: " << geometria.minVKuli("cm") << endl;
    cout << "Niestety,Nie umiem metody minVKuli" << endl;
}

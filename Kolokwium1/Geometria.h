#pragma once
#ifndef GEOMETRIA_H
#define GEOMETRIA_H
#include <iostream>
#include <sstream>
#include <string>
#include <conio.h>
#include "Bryla.h"

using namespace std;

class Geometria
{
private:
	Bryla** tab;
	int size;
	int ilosc;
public:
	Geometria(int size);
	virtual ~Geometria();
	void dodaj(Bryla* nowa);
	void usun(int id);
	float minVKuli(string jednostka);
	int getSize();
	int getIlosc();
	string opis();
};
#endif /*GEOMETRIA_H*/


#pragma once
#ifndef STOZEK_H
#define STOZEK_H
#include <iostream>
#include <sstream>
#include <string>
#include "Jednostka.h"
#include "Bryla.h"
#include <conio.h>

using namespace std;

class Stozek : public Bryla
{
private:
	float promien;
	float wysokosc;
public:
	Stozek(Jednostka jednostka,float promien,float wysokosc);
	string opis();
	float obliczObjetosc();
};
#endif /*STOZEK_H*/


#pragma once
#ifndef KULA_H
#define KULA_H
#include <iostream>
#include <sstream>
#include <string>
#include "Jednostka.h"
#include "Bryla.h"
#include <conio.h>

using namespace std;
class Kula : public Bryla 
{
private:
	float promien;
	string nazwa;
public:
	Kula(Jednostka jednostka, float promien);
	string opis();
	float obliczObjetosc();
};
#endif /*KULA_H*/


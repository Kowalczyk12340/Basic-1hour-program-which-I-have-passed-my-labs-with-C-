#pragma once
#ifndef BRYLA_H
#define BRYLA_H
#include <iostream>
#include <sstream>
#include <string>
#include "Jednostka.h"

using namespace std;

class Bryla
{
protected:
	int id;
	Jednostka jednostka;
	static int noweId;
public:
	Bryla(Jednostka jednostka);
	int getId();
	virtual float obliczObjetosc() = 0;
	virtual string opis() = 0;
};
#endif /*BRYLA_H*/


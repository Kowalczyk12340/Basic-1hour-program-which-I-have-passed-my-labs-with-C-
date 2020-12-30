#include "Bryla.h"
#include <cstdlib>
#include <ctime>

int Bryla::noweId = 0;

Bryla::Bryla(Jednostka jednostka) : jednostka(jednostka)
{
	this->jednostka = jednostka;
	this->id = ++noweId;
}

int Bryla::getId()
{
	return id;
}

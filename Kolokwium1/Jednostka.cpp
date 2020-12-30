#include "Jednostka.h"

Jednostka::Jednostka()
{
	nazwa = "cm";
}
Jednostka::Jednostka(string nazwa) : nazwa(nazwa)
{
}
string Jednostka::getJednostka()
{
	return nazwa;
}
string Jednostka::getSzescianJednostki()
{
	return getJednostka() + "3";
}

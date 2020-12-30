#include "Kula.h"
#define _USE_MATH_DEFINES
#define M_PI 3.1415926
#include <cmath>

Kula::Kula(Jednostka jednostka, float promien) : Bryla(jednostka)
{
	this->promien = promien;
}
string Kula::opis()
{
	ostringstream file;
	file << "Kula o id: " << id << endl << "Promien r = " << promien << jednostka.getJednostka() << endl << "Objetosc V = " << obliczObjetosc() << jednostka.getSzescianJednostki() << endl;
	return file.str();
}
float Kula::obliczObjetosc()
{
	return (4.0 / 3.0) * (M_PI * promien * promien * promien);
}

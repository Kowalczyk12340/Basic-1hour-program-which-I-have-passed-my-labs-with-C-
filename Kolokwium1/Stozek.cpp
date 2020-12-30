#include "Stozek.h"
#define _USE_MATH_DEFINES
#define M_PI 3.1415926
#include <cmath>

Stozek::Stozek(Jednostka jednostka, float promien, float wysokosc) : Bryla(jednostka)
{
	this->promien = promien;
	this->wysokosc = wysokosc;
}
string Stozek::opis()
{
	ostringstream file;
	file << "Stozek o id: " << id << endl << "Wysokosc h = " << wysokosc << jednostka.getJednostka() << endl << "Promien r = " << promien << jednostka.getJednostka() << endl << "Objetosc V = " << obliczObjetosc() << jednostka.getSzescianJednostki() << endl;
	return file.str();
}
float Stozek::obliczObjetosc()
{
	return (1.0 / 3.0) * (M_PI * promien * promien * wysokosc);
}

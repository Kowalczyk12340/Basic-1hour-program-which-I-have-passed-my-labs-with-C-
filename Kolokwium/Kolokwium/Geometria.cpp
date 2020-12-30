#include "Geometria.h"
#include "BrakMiejsca.h"
#include "BrakBryly.h"
#include "Kula.h"

Geometria::Geometria(int size)
{
	this->size = abs(size);
	tab = new Bryla* [this->size];
	for (int i = 0; i < size; i++)
	{
		tab[i] = NULL;
	}
	ilosc = 0;
}
Geometria::~Geometria()
{
	delete[]tab;
}
void Geometria::dodaj(Bryla* nowa)
{
	try {
		if (ilosc < size)
			tab[ilosc++] = nowa;
		else
			throw BrakMiejsca("Tablica jest pelna!", size);
	}
	catch (BrakMiejsca& wyjatek)
	{
		cout << wyjatek.toString() << "\n";
	}
}
void Geometria::usun(int id)
{
	try {
		for (int i = 0; i < ilosc; i++)
		{
			if (tab[i]->getId() == id)
			{
				tab[i] = tab[ilosc - 1];
				tab[ilosc - 1] = NULL;
				ilosc--;
				return;
			}
		}
		throw BrakBryly("Nie ma bryly o podanym id", id);
	}
	catch (BrakBryly& wyjatek)
	{
		cout << wyjatek.toString() << "\n";
	}
}
float minVKuli(string jednostka)
{
	return 1.0;
}
int Geometria::getSize()
{
	return size;
}
int Geometria::getIlosc()
{
	return ilosc;
}
string Geometria::opis()
{
	stringstream napis;
	for (int i = 0; i < ilosc; i++)
		napis << tab[i]->opis() << "\n";
	return napis.str();
}


#include "BrakMiejsca.h"
#include <sstream>

BrakMiejsca::BrakMiejsca(string opis, int rozmiar) :opis(opis), rozmiar(rozmiar)
{}

string BrakMiejsca::toString()
{
    stringstream ss;
    ss << "Nastapil wyjatek: " << opis << " rozmiar: " << rozmiar;
    return ss.str();
}

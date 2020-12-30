#include "BrakBryly.h"
#include <sstream>

BrakBryly::BrakBryly(string opis, int id) :opis(opis)
{
    this->id = id;
}

string BrakBryly::toString()
{
    stringstream ss;
    ss << "Nastapil wyjatek: " << opis << " z bryla o id: " << id << endl;
    return ss.str();
}

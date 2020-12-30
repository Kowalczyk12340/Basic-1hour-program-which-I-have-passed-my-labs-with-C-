#pragma once
#include <iostream>

using namespace std;

class BrakMiejsca
{
protected:
    string opis;
    int rozmiar;
public:
    BrakMiejsca(string opis, int rozmiar);
    string toString();
};


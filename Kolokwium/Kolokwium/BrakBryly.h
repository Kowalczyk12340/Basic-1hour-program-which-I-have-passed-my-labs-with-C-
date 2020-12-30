#pragma once
#include <iostream>

using namespace std;

class BrakBryly
{
protected:
    string opis;
    int id;
public:
    BrakBryly(string opis,int id);
    string toString();
};


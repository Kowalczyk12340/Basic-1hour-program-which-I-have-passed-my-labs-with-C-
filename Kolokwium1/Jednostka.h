#pragma once
#ifndef JEDNOSTKA_H
#define JEDNOSTKA_H
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

class Jednostka
{
private:
	string nazwa;
public:
	Jednostka();
	Jednostka(string nazwa);
	string getJednostka();
	string getSzescianJednostki();
};
#endif /*JEDNOSTKA_H*/


#pragma once
#include "Passport.h"
#include <vector>
class ForegnPassport:public Passport
{
	string _nameEN;
	string _surnameEN;
	int _number{ 0 };
	vector<string> _visa;

public:
	ForegnPassport(){}
	ForegnPassport(string name, string surname, string patronymic, int series, int number);

	void print();

	ForegnPassport& setNameEN(string name) { _nameEN = name; return *this; }

	ForegnPassport& setSurnameEN(string surname) { _surnameEN = surname; return *this; }

	ForegnPassport& setNumber(int number) { _number = number; return *this; }

	ForegnPassport& addVisa(string visa) { _visa.push_back(visa); return *this; }


};


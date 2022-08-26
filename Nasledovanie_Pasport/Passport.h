#pragma once
#include<iostream>
#include <vector>
using namespace std;

class Passport
{
	vector<Passport> _arrPasp;
	string _name;
	string _surname;
	string _patronymic;
	int _series{0};
	int _number{0};

public:
	Passport(){}

	Passport(string name, string surname, string patronymic, int series, int number);
	

	Passport& setName(string name) { _name = name; return *this; }

	Passport& setSurname(string surname) { _surname = surname; return *this;}

	Passport& setPatronymic(string patronymic) { _patronymic = patronymic; return *this;}

	Passport& setSeries(int series);

	Passport& setNumber(int number);

	string getName() { return _name; }

	string getSurname() { return _surname; }

	string getPatronymic() { return _patronymic; }

	int getSeries() { return _series; }

	int getNumber() { return _number; }

	void print();

	bool check();//пока проверка работает неверно

	void addPasport();
};


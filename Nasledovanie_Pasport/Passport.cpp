#include "Passport.h"
#include <string>

Passport::Passport(string name, string surname, string patronymic, int series, int number)
{
	setName(name);
	setSurname(surname);
	setPatronymic(patronymic);
	setSeries(series);
	setNumber(number);
	
}

void Passport::print()
{
	cout << "Фамилия: " << getSurname() << endl<<
		"Имя: " << getName() <<endl<<
		"Отчество: " << getPatronymic() << endl;
	cout << "Серия, номер паспорта: " << getSeries() << " " << getNumber() << endl << endl;
}

bool Passport::check(Passport& pass)
{
	for (auto& item : _arrPasp)
	{
		if (item.getSeries() == pass.getSeries() &&
			item.getNumber() == pass.getNumber())
			return true;
	}

	return false;
}

void Passport::addPasport()
{
	string name;
	string surname;
	string patronymic;
	int series{ 0 };
	int number{ 0 };

	cout << "Введите фамилию" << endl;
	getline(cin, surname);
	getline(cin, surname);
	cout << "Введите имя" << endl;
	getline(cin, name);
	cout << "Введите отчество" << endl;
	getline(cin, patronymic);
	cout << "Введите серию паспорта" << endl;
	cin>>series;
	cout << "Введите номер паспорта" << endl;
	cin >> number;

	Passport pasp(surname,name,patronymic,series,number);

	if (check(pasp))
	{
		cout << "Номер паспорта уже есть в базе\n";
	}
	else
	{
		_arrPasp.push_back(pasp);
		cout << "Данные дабавлены в базу\n";
	}
}

Passport& Passport::setSeries(int series)
{
	_series = series;
	return *this;
}

Passport& Passport::setNumber(int number)
{
	_number = number;
	return *this;
}
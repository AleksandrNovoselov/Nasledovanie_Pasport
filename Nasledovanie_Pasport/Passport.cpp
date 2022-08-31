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
	cout << "�������: " << getSurname() << endl<<
		"���: " << getName() <<endl<<
		"��������: " << getPatronymic() << endl;
	cout << "�����, ����� ��������: " << getSeries() << " " << getNumber() << endl << endl;
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

	cout << "������� �������" << endl;
	getline(cin, surname);
	getline(cin, surname);
	cout << "������� ���" << endl;
	getline(cin, name);
	cout << "������� ��������" << endl;
	getline(cin, patronymic);
	cout << "������� ����� ��������" << endl;
	cin>>series;
	cout << "������� ����� ��������" << endl;
	cin >> number;

	Passport pasp(surname,name,patronymic,series,number);

	if (check(pasp))
	{
		cout << "����� �������� ��� ���� � ����\n";
	}
	else
	{
		_arrPasp.push_back(pasp);
		cout << "������ ��������� � ����\n";
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
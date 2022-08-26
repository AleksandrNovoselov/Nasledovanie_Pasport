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

bool Passport::check()
{
	for (size_t i = 1; i < _arrPasp.size(); i++)
	{
		if (_arrPasp[i - 1]._series == _arrPasp[i]._series)
		{
			if (_arrPasp[i - 1]._number == _arrPasp[i]._number)
			{
				return true;
			}
		}
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

	_arrPasp.push_back(pasp);

	if (check())
	{
		cout << "����� �������� ��� ���� � ����\n";
		_arrPasp.pop_back();
	}
	else
		cout << "������ ��������� � ����\n";
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
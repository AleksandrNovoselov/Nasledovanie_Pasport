#include "ForegnPassport.h"
ForegnPassport::ForegnPassport(string name, string surname, string patronymic, int series, int number)
{
	setName(name);
	setSurname(surname);
	setPatronymic(patronymic);
	setSeries(series);
	setNumber(number);
}

void ForegnPassport::print()
{
	//Passport::print();
	cout << "�������: " << getSurname() << " / " << _surnameEN << endl <<
		"���: " << getName() << " / " << _nameEN << endl <<
		"��������: " << getPatronymic() << endl <<
		"�����, ����� ��������: " << getSeries() << " " << getNumber() << endl <<
		"����� ��������������: " << _number << endl <<
		"������� ����:" << endl;

		for(int i=0,j=1;i<_visa.size();i++,j++)
		{
			cout << j<<" "<<_visa[i] << endl;
		}
		cout << endl;
}

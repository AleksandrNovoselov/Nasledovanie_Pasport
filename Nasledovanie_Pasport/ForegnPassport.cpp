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
	cout << "Фамилия: " << getSurname() << " / " << _surnameEN << endl <<
		"Имя: " << getName() << " / " << _nameEN << endl <<
		"Отчество: " << getPatronymic() << endl <<
		"Серия, номер паспорта: " << getSeries() << " " << getNumber() << endl <<
		"Номер загранпаспорта: " << _number << endl <<
		"Наличие визы:" << endl;

		for(int i=0,j=1;i<_visa.size();i++,j++)
		{
			cout << j<<" "<<_visa[i] << endl;
		}
		cout << endl;
}

#include <iostream>
#include "Passport.h"
#include "ForegnPassport.h"


int main()
{
	setlocale(0, "");
	bool flag{ true };
	
	cout << "<<Для примера>>\n";

	Passport pasp("Андрей","Петров","Акакьевич",9404,123456);
	pasp.print();
	
	ForegnPassport pasp2;
	
	pasp2.setSurname("Иванов")
		.setName("Иван")
		.setPatronymic("Иванович")
		.setSeries(9505)
		.setNumber(987456);

	pasp2.setSurnameEN("Ivanov")
		.setNameEN("Ivan")
		.setNumber(159357);

	pasp2.addVisa("какая-то информация по визве 1")
		.addVisa("еще информация по второй визе");

	pasp2.print();
	
	for (size_t i = 0; i < 5; i++)
	{
		pasp.addPasport();
	}
	
}


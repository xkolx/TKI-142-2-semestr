#include <iostream>
#include "Person.h"

Person::Person(const string first, const string second, const string third)
{
    std::cout << "Введите ФИО" << endl;
    FirstName = second;
    LastName = first;
    patronymic = third;
}


void Person::ShowFormal()
{
    std::cout <<endl<< "Фамилия: " << LastName << endl <<
    "имя: "<<  FirstName << endl <<
    "Отчество: " << patronymic << endl << endl;
}

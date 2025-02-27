#include <iostream>
#include "Person.h"

Person::Person(const string first, const string second, const string third)
{
    std::cout << "Введите ФИО: " << endl;
    FirstName = second;
    LastName = first;
    patronymic = third;
}


Person::Person(const string first, const string second)
{
    std::cout << "Введите ИО: " << endl;
    FirstName = second;
    LastName = first;
}


void Person::show()
{
    std::cout <<endl<< "Фамилия: " << LastName << endl << 
        "Имя: " << FirstName << endl << endl;
}


void Person::ShowFormal()
{
    std::cout <<endl<< "Фамилия: " << LastName << endl <<
    "Имя: "<<  FirstName << endl <<
    "Отчество: " << patronymic << endl << endl;
}

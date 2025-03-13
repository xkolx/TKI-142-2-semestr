#include <iostream>
#include "Person.h"

Person::Person(const string first, const string second, const string third)
{
    FirstName = second;
    LastName = first;
    patronymic = third;
}


Person::Person() : LastName(""), FirstName(""), patronymic("") {}


void Person::show()
{
    std::cout <<endl<< "Surname: " << LastName << endl << 
        "Name: " << FirstName << endl << endl;
}


void Person::ShowFormal()
{
    std::cout <<endl<< "Surname: " << LastName << endl <<
    "Name: "<<  FirstName << endl <<
    "Patronymic: " << patronymic << endl << endl;
}
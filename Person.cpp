#include <iostream>
#include "Person.h"

Person::Person(const string first, const string second, const string third)
{
    std::cout << "����� ���" << endl;
    FirstName = second;
    LastName = first;
    patronymic = third;
}


Person::Person(const string first, const string second)
{
    std::cout << "����� ��" << endl;
    FirstName = second;
    LastName = first;
}


void Person::show()
{
    std::cout <<endl<< "�������: " << LastName << endl << 
        "���: " << FirstName << endl << endl;
}


void Person::ShowFormal()
{
    std::cout <<endl<< "�������: " << LastName << endl <<
    "���: "<<  FirstName << endl <<
    "��������: " << patronymic << endl << endl;
}
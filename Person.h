#pragma once
#include <string>
using namespace std;

class Person
{
    private:
        string LastName;
        string FirstName;
        string patronymic;
    public:
        Person();
        Person(string LastName, string FirstName);
        Person(string LastName, string FirstName, string patronymic);
        void show();
        void ShowFormal();
};
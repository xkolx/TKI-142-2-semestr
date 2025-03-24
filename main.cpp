#include <iostream>
#include "Person.h"


int main()
{
    setlocale(LC_ALL, "Russian");
    Person person("Shlaev", "Konstantin", "Yriyevich");
    person.show();
    person.ShowFormal();
    return 0;
}  
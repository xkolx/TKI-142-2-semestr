#include <iostream>
#include "Person.h"


int main()
{
    setlocale(LC_ALL, "Russian");
    Person person("Шлаев", "Константин", "Юрьевич");
    person.ShowFormal();
    return 0;
}   

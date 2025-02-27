#include <iostream>
#include "Person.h"


int main()
{
    setlocale(LC_ALL, "Russian");
    Person person("Шлаев", "Константин", "Юрьевич");
    person.show();
    person.ShowFormal();
    return 0;
}   

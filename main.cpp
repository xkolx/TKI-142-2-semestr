#include <iostream>
#include "Person.h"


int main()
{
    setlocale(LC_ALL, "Russian");
    Person person("�����", "����������", "�������");
    person.show();
    person.ShowFormal();
    return 0;
}   
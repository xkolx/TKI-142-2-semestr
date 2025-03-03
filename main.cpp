#include <iostream>
#include "Cilindr.h"

int main() {
    setlocale(LC_ALL, "Russian");
    Point center(1, 2, 3);
    Cilindr cilindr(center, 5, 10);
    Point testPoint(2, 3, 4);
    
    if (cilindr.contains(testPoint)) {
        std::cout << "����� ��������� ������ ��������." << std::endl;
    } else {
        std::cout << "����� ��������� ��� ��������." << std::endl;
    }

    double volume = cilindr.calculateVolume();
    std::cout << "����� ��������: " << volume << std::endl;

    return 0;
}
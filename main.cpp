#include <iostream>
#include "Cilindr.h"

int main() {
    setlocale(LC_ALL, "Russian");
    Point center(1, 2, 3);
    Cilindr cilindr(center, 5, 10);
    Point testPoint(2, 3, 4);
    
    if (cilindr.contains(testPoint)) {
        std::cout << "Точка находится внутри цилиндра." << std::endl;
    } else {
        std::cout << "Точка находится вне цилиндра." << std::endl;
    }

    double volume = cilindr.calculateVolume();
    std::cout << "Объем цилиндра: " << volume << std::endl;

    return 0;
}
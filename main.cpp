#include <iostream>
#include <string>
#include "Cilindr.h"
#include <cstdlib>

double input(std::string message);
Point getPoint();
Cilindr getCilindr();

int main() {
    setlocale(LC_ALL, "Russian");
    Cilindr cilindr = getCilindr();

    Point testPoint = getPoint();

    if (cilindr.contains(testPoint)) {
        std::cout << "Точка находится внутри цилиндра." << std::endl;
    } else {
        std::cout << "Точка находится вне цилиндра.." << std::endl;
    }

    double volume = cilindr.calculateVolume();
    std::cout << "Объем цилиндра: " << volume << std::endl;

    return 0;
}

double input(std::string message) {
    std::cout << message;
    double num = 0.0;
    std::cin >> num;
    if (std::cin.fail()) {
        std::cerr << "Ошибка: введено не число!\n";
        exit(1);
    }
    return num;
}

Point getPoint() {
    auto x = input("Input x: ");
    auto y = input("Input y: ");
    auto z = input("Input z: ");
    return Point(x, y, z);
}

Cilindr getCilindr() {
    auto center = getPoint();
    auto radius = input("Input radius: ");
    auto height = input("Input height: ");
    return Cilindr(center, radius, height);
}
#include <iostream>
#include <string>
#include "Cilindr.h"

double getCoordinate(std::string message);


int main() {
    setlocale(LC_ALL, "Russian");
    auto x = getCoordinate("Input x: ");
    auto y = getCoordinate("Input y: ");
    auto z = getCoordinate("Input z: ");
    Point center(x, y, z);

    auto radius = getCoordinate("Input radius: ");
    auto height = getCoordinate("Input height: ");
    Cilindr cilindr(center, radius, height);

    auto tx = getCoordinate("Input tx: ");
    auto ty = getCoordinate("Input ty: ");
    auto tz = getCoordinate("Input tz: ");
    Point testPoint(tx, ty, tz);
    
    if (cilindr.contains(testPoint)) {
        std::cout << "Точка находится внутри цилиндра." << std::endl;
    } else {
        std::cout << "Точка находится вне цилиндра." << std::endl;
    }

    double volume = cilindr.calculateVolume();
    std::cout << "Объем цилиндра: " << volume << std::endl;

    return 0;
}

double getCoordinate(std::string message)
{
  std::cout << message;
  double coordinate = 0.0;
  std::cin >> coordinate;
  return coordinate;
}
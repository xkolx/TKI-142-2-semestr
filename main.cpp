#include <iostream>
#include <string>
#include "Cilindr.h"
#include <cstdlib>


double getPoint(std::string message);

double getCilindr(std::string message);


int main() {
    setlocale(LC_ALL, "Russian");
    auto x = getPoint("Input x: ");
    auto y = getPoint("Input y: ");
    auto z = getPoint("Input z: ");
    Point center(x, y, z);

    auto radius = getCilindr("Input radius: ");
    auto height = getCilindr("Input height: ");
    Cilindr cilindr(center, radius, height);

    auto tx = getPoint("Input tx: ");
    auto ty = getPoint("Input ty: ");
    auto tz = getPoint("Input tz: ");
    Point testPoint = Point(tx, ty, tz);
    
    if (cilindr.contains(testPoint)) {
        std::cout << "Точка находится внутри цилиндра." << std::endl;
    } else {
        std::cout << "Точка находится вне цилиндра." << std::endl;
    }

    double volume = cilindr.calculateVolume();
    std::cout << "Объем цилиндра: " << volume << std::endl;

    return 0;
}

double getPoint(std::string message)
{
  std::cout << message;
  double point = 0.0;
  std::cin >> point;
  if (!(point))
  {
    std::cerr << "Ошибка: введено не число!\n";
    exit(1);
    }
  return point;
}

double getCilindr(std::string message)
{
  std::cout << message;
  double cilindr = 0.0;
  std::cin >> cilindr;
  if (!(cilindr))
  {
    std::cerr << "Ошибка: введено не число!\n";
    exit(1);
    }
  return cilindr;
}
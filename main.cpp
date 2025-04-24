#include <iostream>
#include "ArcLength.h"

double input(std::string message);

Angle getAngle() {
  auto degrees = input("Градусы: ");
  auto minutes = input("Минуты: ");
  auto seconds = input("Секунды: ");
  
  return Angle(degrees, minutes, seconds);
}

int main() {
    setlocale(LC_ALL, "Russian");
    // Москва 55 45 0 , 37 37 0
    // Питер 59 56 0 , 30 18 0 

    Angle lat1 = getAngle();
    Angle lon1 = getAngle();
    Angle lat2 = getAngle();
    Angle lon2 = getAngle();


    ArcLength arc(lat1, lon1, lat2, lon2);
    std::cout << "Длина дуги: " << arc.calculateLength() << " м" << std::endl;

    return 0;
}


double input(std::string message)
{
  std::cout << message;
  double input = 0.0;
  std::cin >> input;
  return input;
}
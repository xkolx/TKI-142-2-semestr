#include <iostream>
#include "../include/ArcLength.h"

/**
 * @brief Ввод числа с консоли
 * @param message Сообщение для вывода перед вводом
 * @return Введенное число
 */
double input(std::string message);

/**
 * @brief Создать угол по введенным значениям
 * @return Объект Angle
 */
Angle getAngle() {
  auto degrees = input("Градусы: ");
  auto minutes = input("Минуты: ");
  auto seconds = input("Секунды: ");
  
  return Angle(degrees, minutes, seconds);
}

int main() {
    setlocale(LC_ALL, "ru_RU.UTF-8");
    
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
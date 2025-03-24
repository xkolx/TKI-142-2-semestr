#include <iostream>
#include "ArcLength.h"

double input(std::string message);


int main() {
    setlocale(LC_ALL, "Russian");
    // ћосква 55 45 0 , 37 37 0
    // ѕитер 59 56 0 , 30 18 0
    auto deg_lat1 = input("¬ведите градус первой длины:");
    auto min_lat1 = input("¬ведите минруты первой длины:");
    auto sec_lat1 = input("¬ведите секунды первой длины:");
    Angle lat1(deg_lat1, min_lat1, sec_lat1);
    auto deg_lon1 = input("¬ведите градус первой ширины:");
    auto min_lon1 = input("¬ведите минрутыпервой ширины:");
    auto sec_lon1 = input("¬ведите секундыпервой ширины:");
    Angle lon1(deg_lon1, min_lon1, sec_lon1);
    auto deg_lat2 = input("¬ведите градус второй длины:");
    auto min_lat2 = input("¬ведите минруты второй длины:");
    auto sec_lat2 = input("¬ведите секунды второй длины:");
    Angle lat2(deg_lat2, min_lat2, sec_lat2);
    auto deg_lon2 = input("¬ведите градус второй ширины:");
    auto min_lon2 = input("¬ведите минруты второй ширины:");
    auto sec_lon2 = input("¬ведите секунды второй ширины:");
    Angle lon2(deg_lon2, min_lon2, sec_lon2);

    ArcLength arc(lat1, lon1, lat2, lon2);
    std::cout << "ƒлина дуги: " << arc.calculateLength() << " м" << std::endl;

    return 0;
}


double input(std::string message)
{
  std::cout << message;
  double input = 0.0;
  std::cin >> input;
  return input;
}
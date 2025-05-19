#include <iostream>
#include "../Solver/Angle.h"
#include "../Solver/ArcLength.h"

/**
 * @brief Запрашивает у пользователя ввод угла
 * @param prompt Подсказка для пользователя
 * @return Объект Angle с введенными значениями
 */
Angle getAngle(const std::string& prompt) {
    int degrees, minutes;
    double seconds;

    std::cout << prompt << " (градусы минуты секунды): ";
    std::cin >> degrees >> minutes >> seconds;

    return Angle(degrees, minutes, seconds);
}

int main() {
    try {
        std::cout << "Введите координаты первой точки:\n";
        Angle lat1 = getAngle("Широта");
        Angle lon1 = getAngle("Долгота");

        std::cout << "\nВведите координаты второй точки:\n";
        Angle lat2 = getAngle("Широта");
        Angle lon2 = getAngle("Долгота");

        ArcLength arc(lat1, lon1, lat2, lon2);
        double distance = arc.calculateLength();

        std::cout << "\nДлина дуги: " << distance << " метров" << std::endl;
    }
    catch (const std::exception& e) {
        std::cerr << "Ошибка: " << e.what() << std::endl;
        return 1;
    }

    return 0;
}
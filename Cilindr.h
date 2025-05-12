#include "Point.h"
#include <cmath>

class Cilindr {
private:
    Point center;
    double radius;
    double height;
public:
    /**
     * @brief Конструктор цилиндра
     * @param center Центр основания цилиндра
     * @param radius Радиус цилиндра (должен быть > 0)
     * @param height Высота цилиндра (должна быть > 0)
     */
    Cilindr(const Point& center = Point(), double radius = 0.0, double height = 0.0);
    
    /**
     * @brief Получить радиус цилиндра
     * @return Радиус цилиндра
     */
    double getRadius() const;
    
    /**
     * @brief Получить высоту цилиндра
     * @return Высота цилиндра
     */
    double getHeight() const;
    
    /**
     * @brief Получить центр основания цилиндра
     * @return Точка - центр основания
     */
    Point getCenter() const;
    
    /**
     * @brief Проверить, содержится ли точка внутри цилиндра
     * @param point Точка для проверки
     * @return true если точка внутри цилиндра, иначе false
     */
    bool contains(const Point& point) const;

    /**
     * @brief Вычислить объем цилиндра
     * @return Объем цилиндра
     */
    double calculateVolume() const;
};
#pragma once

class Point {
private:
    double x, y, z;
public:
    /**
     * @brief Конструктор точки
     * @param x Координата X (по умолчанию 0.0)
     * @param y Координата Y (по умолчанию 0.0)
     * @param z Координата Z (по умолчанию 0.0)
     */
    Point(double x = 0.0, double y = 0.0, double z = 0.0);
    
    /**
     * @brief Получить координату X
     * @return Координата X
     */
    double getX() const;
    
    /**
     * @brief Получить координату Y
     * @return Координата Y
     */
    double getY() const;
    
    /**
     * @brief Получить координату Z
     * @return Координата Z
     */
    double getZ() const;

    /**
     * @brief Оператор сравнения точек
     * @param other Другая точка для сравнения
     * @return true если точки равны, иначе false
     */
    bool operator==(const Point& other) const;
    
    /**
     * @brief Оператор неравенства точек
     * @param other Другая точка для сравнения
     * @return true если точки не равны, иначе false
     */
    bool operator!=(const Point& other) const;
};
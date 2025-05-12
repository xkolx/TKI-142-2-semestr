#include "../include/Angle.h"
#include <iostream>
#include <cmath>

/**
 * @brief Класс для расчета длины дуги между двумя точками на сфере
 */
class ArcLength {
private:
    Angle latitude1;
    Angle longitude1;
    Angle latitude2;
    Angle longitude2;

public:
    /**
     * @brief Конструктор из объектов Angle
     * @param lat1 Широта первой точки
     * @param lon1 Долгота первой точки
     * @param lat2 Широта второй точки
     * @param lon2 Долгота второй точки
     */
    ArcLength(const Angle& lat1, const Angle& lon1, const Angle& lat2, const Angle& lon2);
    
    /**
     * @brief Конструктор из десятичных градусов
     * @param lat1 Широта первой точки в десятичных градусах
     * @param lon1 Долгота первой точки в десятичных градусах
     * @param lat2 Широта второй точки в десятичных градусах
     * @param lon2 Долгота второй точки в десятичных градусах
     */
    ArcLength(double lat1, double lon1, double lat2, double lon2);

    /**
     * @brief Вычислить длину дуги между точками
     * @return Длина дуги в метрах
     */
    double calculateLength() const;
};
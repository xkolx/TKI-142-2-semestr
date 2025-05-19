#pragma once
#include "Angle.h"

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
     * @brief Конструктор
     * @param lat1 Широта первой точки
     * @param lon1 Долгота первой точки
     * @param lat2 Широта второй точки
     * @param lon2 Долгота второй точки
     */
    ArcLength(const Angle& lat1, const Angle& lon1, const Angle& lat2, const Angle& lon2);

    /**
     * @brief Вычисляет длину дуги между точками
     * @return Длина дуги в метрах
     */
    double calculateLength() const;
};
#include <iostream>
#include <stdexcept>
#include <string>

/**
 * @brief Класс для работы с углами в градусах, минутах и секундах
 */
class Angle {
private:
    int degrees;
    int minutes;
    double seconds;

    void normalize();

public:
    /**
     * @brief Конструктор из градусов, минут и секунд
     * @param degrees Градусы
     * @param minutes Минуты 
     * @param seconds Секунды 
     */
    Angle(int degrees = 0, int minutes = 0, double seconds = 0.0);
    
    /**
     * @brief Конструктор из общего количества секунд
     * @param totalSeconds Общее количество секунд
     */
    Angle(double totalSeconds);

    /**
     * @brief Получить градусы
     * @return Целое число градусов
     */
    int getDegrees() const;
    
    /**
     * @brief Получить минуты
     * @return Целое число минут
     */
    int getMinutes() const;
    
    /**
     * @brief Получить секунды
     * @return Дробное число секунд
     */
    double getSeconds() const;

    /**
     * @brief Преобразовать угол в радианы
     * @return Угол в радианах
     */
    double toRadians() const;
};
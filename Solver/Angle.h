#pragma once

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

    int getDegrees() const;
    int getMinutes() const;
    double getSeconds() const;

    /**
     * @brief Преобразует угол в радианы
     * @return Значение угла в радианах
     */
    double toRadians() const;

    /**
     * @brief Преобразует угол в десятичные градусы
     * @return Значение угла в десятичных градусах
     */
    double toDecimal() const;
};
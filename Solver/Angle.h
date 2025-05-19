#pragma once

/**
 * @brief  ласс дл€ работы с углами в градусах, минутах и секундах
 */
class Angle {
private:
    /**
    * @brief градусы
    */
    int degrees;
    /**
    * @brief минуты - градусна€ мера
    */
    int minutes;
    /**
    * @brief секунды - градусна€ мера 
    */
    double seconds;

    /**
    * @brief нормализаци€ по градусам, минутам, секудндам
    */
    void normalize();

public:
    /**
     * @brief  онструктор из градусов, минут и секунд
     * @param degrees √радусы
     * @param minutes ћинуты
     * @param seconds —екунды
     */
    Angle(int degrees = 0, int minutes = 0, double seconds = 0.0);

    /**
     * @brief  онструктор из общего количества секунд
     * @param totalSeconds ќбщее количество секунд
     */
    Angle(double totalSeconds);

    /**
    * @brief получение градусов
    */
    int getDegrees() const;
    /** 
    * @brief получение минут
    */
    int getMinutes() const;
    /**
    * @brief получение секунд
    */
    double getSeconds() const;

    /**
     * @brief ѕреобразует угол в радианы
     * @return «начение угла в радианах
     */
    double toRadians() const;

    /**
     * @brief ѕреобразует угол в дес€тичные градусы
     * @return «начение угла в дес€тичных градусах
     */
    double toDecimal() const;
};
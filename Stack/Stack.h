#pragma once
#include <initializer_list>
#include <string>
#include <ostream>

/**
 * @brief Класс, реализующий структуру данных "Стек"
 */
class Stack {
private:
    struct Node {
        int data;
        Node* next;
    };

    Node* topNode;
    size_t stackSize;

public:
    /**
     * @brief Конструктор по умолчанию
     */
    Stack();

    /**
     * @brief Конструктор с инициализацией из списка
     * @param initList Список инициализации
     */
    Stack(std::initializer_list<int> initList);

    /**
     * @brief Деструктор
     */
    ~Stack();

    /**
     * @brief Конструктор копирования
     */
    Stack(const Stack& other);

    /**
     * @brief Оператор присваивания
     */
    Stack& operator=(const Stack& other);

    /**
     * @brief Добавляет элемент на вершину стека
     * @param value Значение элемента
     */
    void push(int value);

    /**
     * @brief Удаляет элемент с вершины стека
     * @return Значение удаленного элемента
     */
    int pop();

    /**
     * @brief Возвращает значение вершины стека без удаления
     * @return Значение элемента на вершине стека
     */
    int peek() const;

    /**
     * @brief Проверяет, пуст ли стек
     * @return true если стек пуст, false в противном случае
     */
    bool isEmpty() const;

    /**
     * @brief Возвращает количество элементов в стеке
     * @return Размер стека
     */
    size_t size() const;

    /**
     * @brief Преобразует содержимое стека в строку
     * @return Строковое представление стека
     */
    std::string toString() const;

    /**
     * @brief Оператор вывода в поток
     */
    friend std::ostream& operator<<(std::ostream& os, const Stack& stack);
};
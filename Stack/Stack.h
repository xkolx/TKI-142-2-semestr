#pragma once
#include <initializer_list>
#include <string>
#include <ostream>

class Stack {
private:
    struct Node {
        int data;
        Node* next;
    };

    Node* topNode;
    size_t stackSize;

public:
    Stack();
    Stack(std::initializer_list<int> initList);
    ~Stack();

    Stack(const Stack& other);

    Stack(Stack&& other) noexcept;

    Stack& operator=(const Stack& other);

    Stack& operator=(Stack&& other) noexcept;


    void push(int value);
    int pop();
    int peek() const;
    bool isEmpty() const;
    size_t size() const;
    std::string toString() const;

    friend std::ostream& operator<<(std::ostream& os, const Stack& stack);
};

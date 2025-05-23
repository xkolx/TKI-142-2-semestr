#include "Stack.h"
#include <stdexcept>
#include <sstream>

Stack::Stack() : topNode(nullptr), stackSize(0) {}

Stack::Stack(std::initializer_list<int> initList) : Stack() {
    for (auto it = initList.end(); it != initList.begin(); ) {
        push(*(--it));
    }
}

Stack::~Stack() {
    while (!isEmpty()) {
        pop();
    }
}

Stack::Stack(const Stack& other) : topNode(nullptr), stackSize(0) {
    Stack temp;
    Node* current = other.topNode;

    while (current != nullptr) {
        temp.push(current->data);
        current = current->next;
    }

    while (!temp.isEmpty()) {
        push(temp.pop());
    }
}

Stack::Stack(Stack&& other) noexcept {
    topNode = nullptr;
    stackSize = 0;
    std::swap(topNode, other.topNode);
    std::swap(stackSize, other.stackSize);
}

Stack& Stack::operator=(const Stack& other) {
    if (this != &other) {
        while (!isEmpty()) {
            pop();
        }

        Stack temp;
        Node* current = other.topNode;
        while (current != nullptr) {
            temp.push(current->data);
            current = current->next;
        }

        while (!temp.isEmpty()) {
            push(temp.pop());
        }
    }
    return *this;
}

void Stack::push(int value) {
    Node* newNode = new Node{ value, topNode };
    topNode = newNode;
    stackSize++;
}

int Stack::pop() {
    if (isEmpty()) {
        throw std::out_of_range("Stack is empty");
    }

    Node* temp = topNode;
    int value = temp->data;
    topNode = topNode->next;
    delete temp;
    stackSize--;

    return value;
}

int Stack::peek() const {
    if (isEmpty()) {
        throw std::out_of_range("Stack is empty");
    }
    return topNode->data;
}

bool Stack::isEmpty() const {
    return topNode == nullptr;
}

size_t Stack::size() const {
    return stackSize;
}

std::string Stack::toString() const {
    std::ostringstream oss;
    Node* current = topNode;

    oss << "[";
    while (current != nullptr) {
        oss << current->data;
        if (current->next != nullptr) {
            oss << ", ";
        }
        current = current->next;
    }
    oss << "]";

    return oss.str();
}

std::ostream& operator<<(std::ostream& os, const Stack& stack) {
    os << stack.toString();
    return os;
}
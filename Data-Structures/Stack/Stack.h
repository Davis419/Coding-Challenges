#pragma once
#include "Node.cpp"


class Stack
{
    private:
        int count;
        Node* top;
    public:
        Stack();
        void push(int);
        void pop();
        Stack* display();
        Stack* reverseStack();
};
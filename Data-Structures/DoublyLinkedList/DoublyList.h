#pragma once
#include "Node.cpp"

class DoublyList
{
    private:
        int count;
        Node* front;
        Node* rear;
    public:
        DoublyList();
        void addAtFront(int);
        void addAtRear(int);
        void displayFromFront();
        void displayFromRear();
       
};

#pragma once
#include "Node.cpp"

class Queue{
    private:
        int count;
        Node* head;
        Node* back;
    public:
        Queue ();
        void enqueue(double);
        void dequeue();
        bool isEmpty();
        int queueHead();
        int queueBack();
        void deleteNegativeNodes();
        Queue* display();
    
};


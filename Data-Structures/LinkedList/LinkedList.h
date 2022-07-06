#pragma once
#include "Node.h"


class LinkedList
{
    private:
        int count;
        Node* front;
    public:
        LinkedList();
        void display();
        void insert(int); //Inserts data by ascending order
        void addAtFront(int);
        Node* addAtLast(int);
        void removeNode(int);
        int getNodeItem(int); //Access data directly using index
        Node* getLastNode();
        
        friend LinkedList* merge(LinkedList*,LinkedList*);
};

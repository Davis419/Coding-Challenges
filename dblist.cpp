#include "DoublyLinkedList/DoublyList.h"
#include "DoublyLinkedList/DoublyList.cpp"
#include <iostream>
using namespace std;

int main()
{
    DoublyList* dblist = new DoublyList();
    
    dblist->addAtFront(4);
    dblist->addAtFront(3);
    dblist->addAtFront(2);
    dblist->addAtFront(0);
    
    dblist->displayFromFront();

    delete dblist;

    return 0;
}

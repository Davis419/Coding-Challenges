#include "DoublyList.cpp"
#include <iostream>
using namespace std;

int main()
{
    DoublyList* dblist = new DoublyList();
    
    dblist->addAtFront(4);
    dblist->addAtFront(3);
    dblist->addAtRear(2);
    dblist->addAtFront(0);
    dblist->addAtRear(1);
    
    dblist->displayFromFront();
    cout<<endl;

    dblist->displayFromRear();

    delete dblist;

    return 0;
}

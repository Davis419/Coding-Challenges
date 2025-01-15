#include "Node.h"
#include "Node.cpp"
#include "LinkedList.cpp"
#include "LinkedList.h"
#include "Queue.h"
#include "Queue.cpp"
#include "Stack.h"
#include "Stack.cpp"
using namespace std;

int main()
{
    
    LinkedList* alist = new LinkedList();
    
    alist->addAtFront(2);
    alist->addAtFront(4);
    alist->addAtFront(6);
    alist->addAtLast(8);
    alist->addAtLast(10);
    alist->addAtLast(12);

    alist->display();

    delete alist;

    Queue* aQ = new Queue();

    aQ->enqueue(2);
    aQ->enqueue(-4);
    aQ->enqueue(6);
    aQ->enqueue(-8);

    aQ->display();

    delete aQ;

    Stack* stk = new Stack();

    stk->push(1);
    stk->push(3);
    stk->push(5);
    stk->push(7);
    stk->push(9);

    stk->display();

    delete stk;
    return 0;

}

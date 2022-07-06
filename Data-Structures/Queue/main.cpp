#include "Queue.cpp"
#include <iostream>
using namespace std;


int main()
{
    Queue* aQ = new Queue();

    aQ->enqueue(0);
    aQ->enqueue(-2);
    aQ->enqueue(4);
    aQ->enqueue(6);
    aQ->enqueue(-10);

    aQ->dequeue();

    aQ = aQ->display();

    aQ->deleteNegativeNodes();

    aQ = aQ->display();

    delete aQ;
    return 0;
}
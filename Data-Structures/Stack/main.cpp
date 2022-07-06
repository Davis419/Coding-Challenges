#include "Stack.cpp"
#include <iostream>
using namespace std;


int main()
{
    Stack* stk = new Stack();

    stk->push(8);
    stk->push(6);
    stk->push(4);
    stk->push(2);
    stk->push(0);

    stk->pop();

    stk = stk->display();

    delete stk;
    return 0;
}

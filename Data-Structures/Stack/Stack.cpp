#include "Stack.h"
#include <iostream>
using namespace std;

Stack::Stack()
{
    count = 0;
    top = NULL;
}

void Stack::push(int a)
{
    Node* newptr = new Node(a);

    if(top == NULL){
        top = newptr;

    }else{
        newptr->next = top;
        top = newptr;
    }
    count++;
}

void Stack::pop()
{
    Node* dlt = top;
    top = top->next;
    delete dlt;
    count--;
}

Stack* Stack::display()
{
    Node* ptr;
    Stack* st = new Stack();
    int cnt = count;

    for(int x = 0; x < cnt; x++)
    {
       ptr = top;
       cout<<ptr->data<<" -> ";
       st->push(ptr->data);
       pop();
    }
    cout<<"END"<<endl<<"Items in the stack: "<<cnt<<endl;
    
    return st->reverseStack();
}


Stack* Stack::reverseStack()
{
    
    Node* ptr;
    Stack* tempStack = new Stack();
    int cnt = count;

    for(int x = 0; cnt > x; cnt--)
    {
       ptr = top;
       tempStack->push(ptr->data);
       pop();
    }

    return tempStack;
}
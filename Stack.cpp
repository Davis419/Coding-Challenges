#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
    Node(int);
    
};

Node::Node(int d)
{
    next = NULL;
    data = d;
}

class Stack
{

    private:
        int count;
        Node* top;
    public:
        Stack();
        void pop();
        void display();
        void push(int);
};

Stack::Stack()
{
    top = NULL;
    count = 0;
}
void Stack::push(int d)
{
    Node* newptr = new Node(d);

    if(top == NULL){
        top = newptr;
        count++;
    
    }else{
        newptr->next = top;
        top = newptr;
        count++;
    }
    
}

void Stack::pop()
{
    Node* dlt = top;
    top = top->next;
    delete dlt;
}

void Stack::display()
{
    Node* ptr = top;
    int cnt = count;
    int x = 0;

    while(cnt > x){
        cout<<ptr->data<<" -> ";
        ptr = ptr->next;

    }
}
int main()
{
    Stack* stk = new Stack();
    
    stk->push(10);
    stk->push(8);
    stk->push(6);
    stk->push(4);
    stk->push(2);

    stk->display();
    return 0;

}

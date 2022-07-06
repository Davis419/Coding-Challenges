#include "Stack/Stack.h"
#include "Stack/Stack.cpp"
#include "Stack/Node.h"
#include "Stack/Node.cpp"
using namespace std;

Stack Stack::reverseString()
{
    Stack ks;

    int cnt = count;
    int x = 0;

    while(cnt > x)
    {
        ks.push(top->data);
        pop();
        cnt--;
    }
    return ks;

}

Stack Stack::display(int a)
{
    Stack ks;
    if(top != NULL){
        Node* ptr;
        int cnt = count;

        for(int x = 0; cnt > x; cnt--)
        {   
            ptr = top;
            cout<<ptr->data<<" -> ";
            ks.push(ptr->data);
            pop();
        }
        cout<<"END"<<endl<<"Items in the stack: "<<count<<endl;
        ks = ks.reverseString();
        return ks;

    }else{
        cout<<"Stack is empty"<<endl;
        return ks;
    }
}

int main()
{
    auto sbu = 12;
    Stack stk = Stack();
    
    stk.push(6);
    stk.push(4);
    stk.push(2);

    stk = stk.display(2);
    cout<<endl;

    stk = stk.reverseString();

    stk = stk.display(2);

    return 0;
}
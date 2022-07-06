#include "DoublyList.h"
#include <iostream>
using namespace std;


DoublyList::DoublyList()
{
    count = 0;
    front = rear = NULL;
}

void DoublyList::addAtFront(int d)
{
    Node* newptr = new Node(d);
    
    if(front == NULL){
        front = rear = newptr;

     
    }else{
        newptr->forward = front;
        front->backward = newptr;
        front = newptr;
        
    }

    count++;
}

void DoublyList::addAtRear(int a)
{
    Node* newptr = new Node(a);

    if(front == NULL){
        front = rear = newptr;
    }
    else{
        rear->forward = newptr;
        newptr->backward = rear;
        rear = newptr;
    }

    count++;
}
        

void DoublyList::displayFromFront()
{
    Node* ptr = front;
    int cnt = count;
   
    cout<<"START -> ";
    for(int x = 0; cnt > x; x++)
    {
        cout<<ptr->data<<" -> ";
        ptr = ptr->forward;
        
    }
    cout<<"END"<<endl;
}
   
void DoublyList::displayFromRear()
{
    Node* ptr = rear;
    int cnt = count;
    cout<<"END <- ";
    for(int x = 0; cnt > x; x++)
    {
        cout<<ptr->data<<" <- ";
        ptr = ptr->backward;
        
    }
    cout<<"START"<<endl;
}  

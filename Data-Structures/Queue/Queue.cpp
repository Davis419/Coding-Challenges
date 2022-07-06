#include <iostream>
#include "Queue.h"
using namespace std;

Queue::Queue()
{
    count = 0;
    head = back = NULL;
}

int Queue::queueHead()
{
    if(!isEmpty()){
        int d = head->data;
        return d;
    
    }else{
        cout<<"Queue is Empty"<<endl;
    }
}

int Queue::queueBack()
{
    int d = back->data;
    return d;
}

bool Queue::isEmpty()
{
    if(head == NULL)
        return true;
    else
        return false;
}

void Queue::enqueue(double x)
{
    Node* newptr = new Node(x);

    if(isEmpty()){
        head = back = newptr;
        
    }else{
        back->next = newptr;
        back = newptr;

    }
    count++;
}

void Queue::dequeue()
{
    if(!isEmpty()){
        Node* dlt = head;
        head = head->next;
        delete dlt;
        count--;

    }else
        cout<<"Queue is empty"<<endl;
}

Queue* Queue::display()
{
    Node* ptr;
    int x = 0;
    Queue* q = new Queue();
    int cnt = count;

    if(!isEmpty()){
        for(int x = 0; x < cnt; x++)
        {
            ptr = head;
            cout<<ptr->data<<" -> ";
            q->enqueue(ptr->data);
            dequeue();
        }

        cout<<"END"<<endl<<"Items in the queue: "<<cnt<<endl;

    }else {
        cout<<"Queue is empty"<<endl;
    }

    return q;
}

void Queue::deleteNegativeNodes()
{
    if(head == NULL)
        return;
    
    Node* LocPtr = head; //Location pointer of the node we want to delete
    Node* prePtr = NULL; //The previous node of the node we want to delete
    int c = count;
     
    while(c > 0)
    {
        if(LocPtr->data < 0 && LocPtr == head){
            head = head->next;
            Node* dlt = LocPtr; 
            LocPtr = head;

            delete (dlt);
        
        }else if(LocPtr->data < 0 && LocPtr != head){
          
            prePtr->next = LocPtr->next;
            Node* dlt = LocPtr;
            LocPtr = LocPtr->next;

            delete (dlt); 
         
        }else if(LocPtr->data > 0 && LocPtr == head){
            prePtr = head;
            LocPtr = LocPtr->next; 
        
        }else{
             prePtr = prePtr->next;
             LocPtr = LocPtr->next; 
        }
        c--;
    }
}


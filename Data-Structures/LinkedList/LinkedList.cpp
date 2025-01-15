#include "LinkedList.h"
#include <iostream>
using namespace std;

LinkedList::LinkedList()
{
    
    front = NULL;
    count = 0;
}


void LinkedList::display()
{
    Node* ptr = front;

    while(ptr != NULL){
        cout<<ptr->data<<" -> ";

        ptr = ptr->next;
    }
    
    cout<<"END\nItems In the list: "<<count<<"\n\n";
}


void LinkedList::insert(int num){ 
    Node* newptr = new Node(num);   
    Node* ptr = front;

    if(front == NULL){
        front = newptr;

    }else if(front->data > newptr->data){
        newptr->next = front;
        front = newptr;
           
    }else {
        while(ptr->next != NULL && ptr->next->data < newptr->data)
        {
            ptr = ptr->next;
        }

        newptr->next = ptr->next;
        ptr->next = newptr;
    }      

    count++; 
}


void LinkedList::addAtFront(int d)
{
    Node* newptr = new Node(d);

    if(front == NULL){
        front = newptr;

    }else{
        newptr->next = front;
        front = newptr;
    }

    count++;
}


Node* LinkedList::addAtLast(int d)
{
    Node* newptr = new Node(d);
    Node* rear = getLastNode();

    if(front == NULL){
        front = newptr;

    }else{
        rear->next = newptr;
        newptr->next = NULL;
    }
    count++;
    
    return newptr;
}


void LinkedList::removeNode(int k)
{
    Node* dlt = front;
    Node* prePtr = front;
    int pos = 0;
    int cnt = count;

    if(k == 0){
        front = front->next;
        delete dlt;
        count--;

    }else if(k > 0 && k < cnt){
        pos++;
        dlt = dlt->next;
         while(dlt->next != NULL && k != pos)
        {
            dlt = dlt->next;
            prePtr = prePtr->next;
            pos++;
        } 
        prePtr->next = dlt->next;
        dlt->next = NULL;
        delete dlt;
        count--;

    }else{
        cout<<"Index out of range"<<endl;
    }
}


int LinkedList::getNodeItem(int index)
{
    int x = 0;
    int value;
    Node* element = front;
    
    if(index < count && index >= 0){    
        while(x < index){
            element = element->next;
            x++;
        }
        value = element->data;
    }else{
        cout<<"Index out of range"<<endl;
        value = 9999;
    }
    
    
    return value;
}



Node* LinkedList::getLastNode()
{
    Node* last = front;

    while(last->next != NULL){
        last = last->next;
    }

    return last;
}


LinkedList* merge(LinkedList* alist, LinkedList* blist)
{
    Node* ptrB = blist->front;

    while(ptrB != NULL)
    {
        alist->insert(ptrB->data);
        ptrB = ptrB->next;
    }
    
    alist->count = alist->count + blist->count;
    
    return alist;
}


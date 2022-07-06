/********************************************************************************************
* Author: Davis Mojela                                                                      * 
* Date: 27-Jul-2019 00h46                                                                   *
* Purpose: Given two sorted linked lists, merge them in order. This can be done recursively *
*          and iteratively. See if you can get both solutions.                              * 
*	  																						*                                               
*********************************************************************************************/


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

class LinkedList
{
    private:
        int count;
        Node* front;
    public:
        LinkedList();
        void addAtFirst(int);
        void addAtLast(int);
        void display();
        Node* getLastNode();

        LinkedList* merge(LinkedList*, LinkedList*);
};

Node* LinkedList::getLastNode()
{
    Node* last = front;

    while(last->next != NULL){
        last = last->next;
    }

    return last;
}

LinkedList::LinkedList()
{
    count = 0;
    front = NULL;
}

LinkedList* LinkedList::merge(LinkedList* alist, LinkedList* blist)
{
    Node* aLastNode = alist->getLastNode();
    aLastNode->next = blist->front;
    alist->count+= blist->count;
    return alist;
}

void LinkedList::addAtLast(int d)
{
    Node* newptr = new Node(d);

    if(front == NULL){
        front = newptr;
        count++;

    }else{
        Node* last = getLastNode();
        last->next = newptr;
        newptr->next = NULL;
        count++;
    }
}
void LinkedList::addAtFirst(int d)
{
    Node* newptr = new Node(d);

    if(front == NULL){
        front = newptr;
        count++;

    }else{
        newptr->next = front;
        front = newptr;
        count++;
    }
}

void LinkedList::display()
{
    Node* ptr = front;

    while(ptr != NULL){
        cout<<ptr->data<<" -> ";
        ptr = ptr->next;
    }
    
    cout<<endl<<"Items In the list: "<<count<<endl;
    cout<<endl;
}

int main()
{
    LinkedList * alist = new LinkedList();
 
    alist->addAtLast(8);
    alist->addAtLast(6);
    alist->addAtLast(4);
    alist->addAtLast(2);

    alist->display();

    LinkedList * blist = new LinkedList();
    
    blist->addAtLast(16);
    blist->addAtLast(14);
    blist->addAtLast(12);
    blist->addAtLast(10);

    blist->display();

    cout<<endl;

    alist = alist->merge(alist,blist);

    alist->display();
    return 0;
}

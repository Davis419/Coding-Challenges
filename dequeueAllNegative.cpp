#include <string>
#include <iostream>
using namespace std;

struct Node
{
  public:
    int data;
    Node *next;

  public:
    Node(int);
};

Node::Node(int d)
{
    next = NULL;
    data = d;
}
class Queue
{
  private:
    int count;
    Node *front;
    Node *back;

  public:
    Queue();
    void enqueue(Node *);
    void dequeue();
    void printQ();
};

Queue::Queue()
{
    front = back = NULL;
    count = 0;
}
void Queue::dequeue()
{
    if(front == NULL)
        return;
    Node* LocPtr = front; //Location pointer of the node we want to delete
    Node* prePtr = NULL; //The previous node of the node we want to delete
    int c = count;
    while(c > 0)
    {
        if(LocPtr->data < 0 && LocPtr == front)
        {
             front = front->next;
              Node* dlt = LocPtr; 
              ///prePtr = front;
            LocPtr = front;

        
             delete (dlt);
        }else if(LocPtr->data < 0 && LocPtr != front)
        {
          
           prePtr->next = LocPtr->next;
            Node* dlt = LocPtr;
              LocPtr = LocPtr->next;
             delete (dlt); 
           
         
        }else if(LocPtr->data > 0 && LocPtr == front) 
        {
            prePtr = front;
           //prePtr = prePtr->next;
          LocPtr = LocPtr->next; 
        }else  
        {
             prePtr = prePtr->next;
             LocPtr = LocPtr->next; 
        }
        
        c--;
    }
    

     
      // cout<<endl<<"The pre pointer has "<<prePtr->data<<endl;
}



void Queue::enqueue(Node *newptr)
{
    if (back == NULL)
    {
        front = back = newptr;
        count++;
    }
    else
    {
        back->next = newptr;
        back = newptr;
        count++;
    }
}

void Queue::printQ()
{
    Node *ptr = front;
    while (ptr != NULL)
    {
        cout << ptr->data << " -> ";
        ptr = ptr->next;
    }
}

int main()
{
    Queue aQ;

    Node *n1 = new Node(-7);
    Node *n2 = new Node(8);
    Node *n3 = new Node(-2);
    Node *n4 = new Node(-6);
    Node *n5 = new Node(10);
    Node *n6 = new Node(-20);
    Node *n7 = new Node(-16);
     Node *n8 = new Node(36);
     Node *n9 = new Node(40);
    Node *n10 = new Node(-45);
     Node *n11 = new Node(50);
   

    aQ.enqueue(n1);
    aQ.enqueue(n2);
    aQ.enqueue(n3);
    aQ.enqueue(n4);
      aQ.enqueue(n5);
     aQ.enqueue(n6);
     aQ.enqueue(n7);
    aQ.enqueue(n8);
   aQ.enqueue(n9);
   aQ.enqueue(n10);
   aQ.enqueue(n11);
    aQ.printQ();
    aQ.dequeue();
    cout<<endl;
    aQ.printQ();
cout<<endl;
   

       delete [] n1;
    delete [] n2;
    delete [] n3;
    delete [] n4;
    delete [] n5;
    delete [] n6;
    delete [] n7 ;
    delete [] n8;
    
    return 0;
}


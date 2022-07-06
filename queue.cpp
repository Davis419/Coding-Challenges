// Queue.cpp : Defines the entry point for the console application.
//
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
    data = d;
	next = NULL;
}

class Queue
{
    private:
	    int count;
	    Node* front;
	    Node* back;
    public:
    Queue();
    void enqueue(int);
    void dequeue();
    void display();
    int getFirst();
    int getLast();

};

Queue::Queue()
{
    count = 0;
	back = front = NULL;
}

void Queue::enqueue(int d)
{
	Node* newptr = new Node(d);

	if(front == NULL){
		front = back = newptr;
		newptr->next = NULL;
		count++;

	}else {
		back->next = newptr;
		back = newptr;
		count++;

	}
}

void Queue::dequeue()
{
	Node* dlt = front;
	front = front->next;
	delete dlt;
	count--;
	
}

void Queue::display()
{
	Node* ptr ;
	int x = 0;
	int cnt = count;

	while(cnt > x) 
	{
		ptr = front;
		cout << ptr->data << " -> " ;
		dequeue();
		cnt--;

	}

}

int Queue::getLast()
{
	int first = back->data;
	return first;
}

int Queue::getFirst()
{
	int first = front->data;
	return first;
}

int main()
{

	Queue *aQ = new Queue();
	aQ->enqueue(2);
	aQ->enqueue(4);
	aQ->enqueue(6);
	aQ->enqueue(8);

	aQ->display();   
    cout<<endl;

	return 0;
}


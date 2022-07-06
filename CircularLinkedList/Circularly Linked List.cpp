// Coding Challenges.cpp : Defines the entry point for the console application.
// Circular Linked List 

#include <iostream>
using namespace std;


struct Node
{
	int data;
	Node* forward;
	Node* backward;

	Node(int);
};

Node::Node(int d)
{
	data = d;
	forward = backward = NULL;
}

class CircularyList
{
	private:
		int count;
		Node* front;
		Node* rear;
	public:
		CircularyList();
		void addAtFront(int);
		void addAtRear(int);
		void display();
		void displayNormally();
		int getRearForward();
		int getFrontBackward();
		Node* getLastNode();
};

CircularyList::CircularyList()
{
	front = rear = NULL;
	count = 0;
}


void CircularyList::addAtFront(int d)
{
	Node* newptr = new Node(d);

	if(front == NULL){
		front = rear = newptr;

	}else {
		newptr->forward = front;
		front->backward = newptr;
		front = newptr;
	}
	
	front->backward = rear;
	rear->forward = front;
	count++;
}

int CircularyList::getRearForward()
{
	return rear->forward->data;
}

int CircularyList::getFrontBackward()
{
	return front->backward->data;
}

void CircularyList::addAtRear(int d)
{
	Node* newptr = new Node(d);

	if(front == NULL){
		front = rear = newptr;

	}else {
		rear->forward = newptr;
		newptr->backward = rear;
		rear = newptr;
	 }

	front->backward = rear;
	rear->forward = front;
	count++;
}

//Will create infinite loop if you run in min because it will try to print till ptr->forward == NULL which is impossible
void CircularyList::displayNormally()
{
	Node* ptr = front;

	while(ptr !=  NULL)
	{
		cout<<ptr->data<<" -> ";
		ptr = ptr->forward;
	}

}

//This display prints until count is 
void CircularyList::display()
{
	Node* ptr = front;
	int cnt = count;
	
	int x = 0;

	//counts number of elements in list and stops until x = count
	while(cnt > x)
	{
		cout<<ptr->data<<" -> ";
		ptr = ptr->forward;
		cnt--;
	
	}
}

int main()
{
	CircularyList* cl = new CircularyList();
	cl->addAtFront(3);
	cl->addAtRear(4);
	cl->addAtFront(5);
	cl->addAtRear(7);
	cl->addAtFront(9);
	
	cout<<endl;
	cout<<cl->getFrontBackward();
	cout<<"\n\n";
	cl->display();

	
	system("pause");
	return 0;
}


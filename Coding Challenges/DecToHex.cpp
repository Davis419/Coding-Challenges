#include <iostream>
#include <string>
using namespace std;

struct Node {
	int data;
	Node *next;
};

class Stack
{   
    private:
	    Node *top;
	    int count;
    public:
	    Stack();
	    void push(int);
	    void pop();
	    void display();
};

Stack::Stack() {
	top = NULL;
	count = 0;
}

void Stack::push(int d) {
	Node *temp = new Node;
	temp->data = d;
	temp->next = top;
	top = temp;
	count++;
}

void Stack::pop() {
	Node *temp = top;
	if (temp == NULL)
		cout << "No Data To Delete\n";
	else {
		top = temp->next;
		delete temp;
		count--;
	}
}

void Stack::display() {
	Node *temp = top;
	if (top == NULL)
		cout << "No Data To Display\n";
	else
		while (count > 0) {
			switch (temp->data) {
			case 15:
				cout << "F";
				break;
			case 14:
				cout << "E";
				break;
			case 13:
				cout << "D";
				break;
			case 12:
				cout << "C";
				break;
			case 11:
				cout << "B";
				break;
			case 10:
				cout << "A";
				break;
			default:
				cout << temp->data;
				break;
			}
			temp = temp->next;
			count--;
		}
		cout << endl;
}

int main()
{
	Stack s;
	int n;
	cout << "Enter A Positive Number\n";
	cin >> n;
	while (n > 0) {
		s.push(n % 16);
		n /= 16;
	}

	cout << "Hexadecimal Number: ";
	s.display();
	return 0;
}

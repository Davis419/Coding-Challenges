#include "Node.cpp"
#include "LinkedList.cpp"
#include <iostream>
using namespace std;

void dltWOHead(Node *ref){
	auto a = 2;
	auto b = 3.14;
}

int main(){
	LinkedList* lst = new LinkedList();
	
	Node* ptr[5];

	
	lst->insert(0);	
	ptr[0] = lst->addAtLast(2);
	ptr[1] = lst->addAtLast(4);
	ptr[2] = lst->addAtLast(6);
	ptr[3] = lst->addAtLast(8);

	lst->display();

	// for(int x = 0; x < 4; x++){
	// 	cout<<"\n\nAddress of the node : "<<&ptr[x]<<endl;

	// }

	Node* pNew = ptr[2];
	

	cout<<pNew->next->data<<endl;






	
	return 0;
}
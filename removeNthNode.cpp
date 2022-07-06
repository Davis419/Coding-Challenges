/****************************************************************************************** 
 * Given a linked list, remove the nth node from the end of list and return its head      *
 * For example, Given linked list: 1->2->3->4->5, and n = 2.                              *
 * After removing the second node from the end, the linked list becomes 1->2->4->5.       *
 ******************************************************************************************/
#include <iostream>
#include "LinkedList.h"
#include "LinkedList.cpp"
#include "Node.h"
#include "Node.cpp"

void LinkedList::removeNode(int k)
{
    Node* dlt = front;
    Node* prePtr = front;
    int pos = 0;
    int cnt = count;

    if(k == 0){
        front = front->next;
        delete dlt;
    }else{
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
    }
   count--;
}

int main()
{
    LinkedList alist = LinkedList();
    alist.insert(5);
    alist.insert(6);
    alist.insert(3);
    alist.insert(1);
    alist.insert(4);
    alist.insert(2);
    alist.display();

    cout<<"After delete Node with index 2: "<<endl;

    alist.removeNode(5);

    alist.display();

    return 0;
}
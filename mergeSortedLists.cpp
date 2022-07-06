/*******************************************************************************
 * Author: Davis Mojela                                                        *
 * Date: 02-Sept-2019                                                          *
 * Merge two sorted linked lists and return it as a new list.                  *              
 * For example, given following linked lists :                                 *
 * 5 -> 8 -> 20                                                                *
 * 4 -> 11 -> 15                                                               *
 * The merged list should be :                                                 *
 * 4 -> 5 -> 8 -> 11 -> 15 -> 20                                               *
 *******************************************************************************/


#include "Node.h"
#include "Node.cpp"
#include "LinkedList.cpp"
#include "LinkedList.h"
using namespace std;

LinkedList mergeSortedLists(LinkedList alist,LinkedList blist)
{
    LinkedList newList;

    Node* ptrA = alist.front;

    while(ptrA->next != NULL)
    {
        newList.insert(ptrA->data);
        ptrA = ptrA->next;
    }

    Node* ptrB = blist.front;

    while(ptrB->next != NULL)
    {
        newList.insert(ptrB->data);
        ptrB = ptrB->next;
    }
    newList.count = alist.count + blist.count;
    
    return newList;
}


int main()
{
    LinkedList alist = LinkedList();

    alist.insert(3);
    alist.insert(1);
    alist.insert(5);
    alist.insert(9);

    cout<<"List A: "<<endl;
    alist.display();

    LinkedList blist = LinkedList();

    blist.insert(2);
    blist.insert(0);
    blist.insert(5);
    blist.insert(4);

    cout<<"List B: "<<endl;
    blist.display();

    cout<<"Merged list: "<<endl;

    LinkedList clist = mergeSortedLists(alist,blist);

    clist.display();
}
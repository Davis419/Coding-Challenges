/*******************************************************************************
 * Author: Davis Mojela                                                        *
 * Date: 02-Sept-19 20h30                                                      *
 * Merges two unsorted linked lists                                            *
 * For example, given following linked list :                                  *
 *  3 -> 8 -> 2                                                                *
 *  6 -> 3 -> 4                                                                *
 * The merged unsorted list should be :                                        *
 * 3 -> 8 -> 2 -> 6 -> 3 -> 4                                                  *
 *******************************************************************************/


#include "Node.h"
#include "Node.cpp"
#include "LinkedList.cpp"
#include "LinkedList.h"
using namespace std;

LinkedList* merge(LinkedList* xlist, LinkedList* ylist)
{
    Node* aLastNode = xlist->getLastNode();
    aLastNode->next = ylist->front;
    xlist->count+= ylist->count;
    return xlist;
}

int main()
{
  LinkedList* alist = new  LinkedList();

  
  alist->addAtLast(4);
  alist->addAtFront(2);
  alist->addAtLast(6);
  alist->display();

  LinkedList* blist = new LinkedList();

  blist->addAtLast(8);
  blist->addAtLast(10);
  blist->addAtLast(12);
  blist->display();

  alist = merge(alist,blist);

  alist->display();
  

}
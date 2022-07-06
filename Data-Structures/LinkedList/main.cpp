#include "Node.cpp"
#include "LinkedList.cpp"


int main()
{
    LinkedList* list = new LinkedList();

    list->insert(8);
    list->insert(4);
    list->insert(2);
    list->insert(6);
    
    LinkedList* anotherList = new LinkedList();
    anotherList->insert(1);
    anotherList->insert(10);
    anotherList->insert(0);
    anotherList->insert(5);

    list->display();
    anotherList->display();
    cout<<"\n";

    list = merge(list, anotherList);

    list->display();

    list->removeNode(0);
    list->display();

    int index = 3;
    cout<<"LinkedList(3) =  "<<list->getNodeItem(index)<<endl;
    
    return 0;
}
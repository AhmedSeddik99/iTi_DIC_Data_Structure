#include <iostream>

using namespace std;
#include "LinkedList.h"

int main()
{
    
    LinkedList mylist;

    mylist.add(3);
    mylist.add(5);
    mylist.add(10);
    mylist.add(3);
    mylist.add(13);
    mylist.display();// 3 5 10 3 13
    mylist.removeNode(15); //Not Found
    mylist.removeNode(3);
    mylist.display();//5 10 3 13
    mylist.removeNode(3);
    mylist.display();// 5 10 13

    mylist.InsertAfter(13, 7);
    mylist.display();// 5 10 13 7


    mylist.InsertAfter(10, 2);
    mylist.display();// 5 10 2 13 7


    mylist.InsertAfter(5, 6);
    mylist.display();// 5 6 10 2 13 7


    mylist.InsertBefore(7, 0);
    mylist.display();// 5 6 10 2 13 0 7


    mylist.InsertBefore(2, 4);
    mylist.display();// 5 6 10 4 2 13 0 7


    mylist.InsertBefore(5, 1);
    mylist.display();// 1 5 6 10 2 13 0 7

    cout << "Number of Nodes = " << mylist.GetCount() << endl;

    int index;

    cout << "Enter the index of the Node to get its data" << endl;
    cin >> index;
    cout << "Data inside Node number: " << 10 << " = " << mylist.GetDataByIndex(10) << endl;


    return 0;
}

#include <iostream>
#include "LinkedList.h"

using namespace std;

int main() {
    LinkedList ll;
    cout << "\n**********************\nTesting Empty List\n**********************\n";
    cout << "Empty list size: " << ll.getSize() << "\nEmpty list elements (Expecting [ ]): ";
    ll.printList();

    cout << "\n\n**********************\nTesting pushFront(12.5)\n**********************\n";
    ll.pushFront(12.5);
    cout << "Expecting size of 1: " << ll.getSize() << "\nExpecting [ 12.5 ]: ";
    ll.printList();

    cout << "\n\n**********************\nTesting popFront()\n**********************\n";
    double popElement = ll.popFront();
    cout << "Expecting to pop 12.5: " << popElement << endl;
    cout << "Expecting size 0: " << ll.getSize() << "\nExpecting empty list ([ ]): ";
    ll.printList();

    cout << endl;
    return 0;
}

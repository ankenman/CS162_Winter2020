#include <iostream>
using namespace std;

// TODO: use a loop and pointers to add all elements in array ptr
// There shouldn't be any square brackets [] in the solution
// 15 points
double sumLoop(double* ptr, size_t size) {
    return 0.0;
}

// TODO: use recursion to sum all the elements in array ptr
// Define your base case and recursive call
// 15 points
double sumRec(double* ptr, size_t size) {
    return 0.0;
}

class LinkedList {
    public:
        LinkedList() {
            // TODO: initialize list
            // head can point to a dummy node or to null, but ensure that your
            // member functions adhere to that representation
            // 5 points
        }
        ~LinkedList() {
            // Deallocate all nodes in the list. You can use a loop or recursive helper
            // Suggestion: use your popFront member function
            // 10 points
        }
        void printList() {
            // TODO: Call recursive helper function to print out the list
            // Use this form (no need to check for end of list):
            // { 1.0 2.0 3.0 }
            // 10 points
        }
        void pushFront(double newData) {
            // TODO: Add element to front of list
            // 10 points
        }
        void pushBack(double newData) {
            // TODO: Add an element to the back of the list using helper function
            // 15 points
        }
        double popFront() {
            // TODO: Remove and return element from front of list
            // ASSUMEPTION: We will not remove from an empty list
            // Do NOT do any error checking for that
            // 15 points
            return 0.0;
        }
        int getLength() {
            // TODO: Call recursive helper function to count the number of nodes
            // 10 points
            return 0;
        }
    private:
        struct Node {
            double data;
            Node *next;
        };
        Node *head;

        // Private helper functions
        void printHelper(Node *n) {
            // TODO: Print out list recursively
            // 15 points
        }
        int countNodes(Node *n) {
            // TODO: Recursively count nodes
            // 15 points
            return 0;
        }
        Node* findEnd(Node *n) {
            // TODO: Retrun last node of the list
            // e.g., the node that is pointing to null
            // 15 points
            return nullptr;
        }
};

int main() {
    double array[] = { 3.4, -5.6, 1.2, -3.5 };
    int size = 4;
    cout << "Testing sumLoop ****************\n";
    cout << "\t Expecting -4.5, got " << sumLoop(array, size) << endl;
    cout << "Testing sumRec  ****************\n";
    cout << "\t Expecting -4.5, got " << sumRec(array, size) << endl;

    cout << "\n\nTesting LinkedList  ****************\n";
    LinkedList list;
    for (double i = -8.4; i < 8.0; i += 3.3) {
        list.pushFront(i);
    }
    cout << "\tTesting pushFront, printList, getLength\n";
    cout << "\tprintList: Expecting { 4.8 1.5 -1.8 -5.1 -8.4 } and got ";
    list.printList();
    cout << endl;
    cout << "\tgetLength: Expecting 5 and got " << list.getLength() << endl;

    cout << "\n\tTesting pushBack\n";
    list.pushBack(3.4);
    cout << "\tprintList: Expecting { 4.8 1.5 -1.8 -5.1 -8.4 3.4 } and got ";
    list.printList();
    cout << endl;
    cout << "\tgetLength: Expecting 6 and got " << list.getLength() << endl;

    cout << "\n\tTesting popFront\n";
    double poppedValue = list.popFront();
    cout << "\tExpected 4.8 and got " << poppedValue << endl;
    list.printList();
    cout << endl;

    return 0;
}

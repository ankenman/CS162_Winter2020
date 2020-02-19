#include <iostream>
using namespace std;

class LinkedList {
    public:
        LinkedList();
        ~LinkedList();
        void pushFront(double data);
        double popFront();
        void printList();
        size_t getSize();
    private:
        struct Node{
            double data;
            Node *next;
        };
        Node *head;
};



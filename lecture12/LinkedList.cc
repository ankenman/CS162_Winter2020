#include "LinkedList.h"

LinkedList::LinkedList() {
    head = new Node();
    head->next = nullptr;
}

LinkedList::~LinkedList() {
}

void LinkedList::pushFront(double data) {
    Node *newNode = new Node();
    newNode->data = data;
    newNode->next = head->next;
    head->next = newNode;
}

double LinkedList::popFront() {
    return 0;
}

void LinkedList::printList() {
    cout << "[ ";
    Node *currentNode = head->next;
    while (currentNode != nullptr) {
        cout << currentNode->data << ' ';
        currentNode = currentNode->next;
    }
    cout << "]";
}

size_t LinkedList::getSize() {
    size_t size = 0;
    Node *currentNode = head->next;
    while (currentNode != nullptr) {
        ++size;
        currentNode = currentNode->next;
    }
    return size;
}

#ifndef JOSEPHUS_LINKEDLIST_H
#define JOSEPHUS_LINKEDLIST_H


#include "Node.h"

class LinkedList {
private:
    Node * head;
    int size;

public:
    LinkedList();
    void append(int);
    void remove(int);
    void printAll() const;
    int getSize() const ;
    void setSize(int);
    Node* GH() const ;

    Node *findNode(int val) const;

    void startRemoval(int startingPoint);
};

#endif

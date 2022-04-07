
#ifndef __H__LINKEDLIST__
#define __H__LINKEDLIST__
#include "Node.h"

class LinkedList
{
private:
    Node *head;
    Node *tail;
    int size;
    void nodeDeleter(Node *node);
    bool isEmplty();
    Node *getPrevious(Node *node);

public:
    LinkedList();
    ~LinkedList();
    void add_to_last(int data);
    void add_to_first(int data);
    int indexOf(int data);
    bool contains(int data);
    void removeFirst();
    void removeLast();
    int getSize();
    int *toArry();
};

#endif
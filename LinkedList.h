
#ifndef __H__LINKEDLIST__
#define __H__LINKEDLIST__
#include "Node.h"

class LinkedList
{
private:
    Node *head;
    Node *tail;

public:
    LinkedList();
    ~LinkedList();
};

#endif
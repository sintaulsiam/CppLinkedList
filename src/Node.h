
#include "LinkedList.h"

#ifndef __H__NODE__
#define __H__NODE__

class Node
{
    friend class LinkedList;

private:
    int data;
    Node *next;

public:
    Node();
    Node(int data);
    ~Node();
};

#endif
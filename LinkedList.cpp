#include "LinkedList.h"
#include <iostream>

LinkedList::LinkedList() : head(nullptr), tail(nullptr)
{
}

LinkedList::~LinkedList()
{

    if (head)
    {
        this->nodeDeleter(head);
    }
}

void LinkedList::nodeDeleter(Node *node)

{
    if (node->next)
    {
        this->nodeDeleter(node->next);
    }

    delete node;
}

void LinkedList::add_to_last(int data)
{

    Node *node = new Node(data);
    if (this->isEmplty())
    {
        this->head = this->tail = node;
    }
    else
    {
        this->tail->next = node;
        this->tail = node;
    }
    node = nullptr;
}

void LinkedList::add_to_first(int data)
{
    Node *node = new Node(data);
    if (this->isEmplty())
    {
        head = tail = node;
    }
    else
    {
        node->next = head;
        head = node;
    }
    node = nullptr;
}

bool LinkedList::isEmplty()
{
    return !head;
}

int LinkedList::indexOf(int data)
{
    int index = 0;
    Node *current = head;

    while (current)
    {
        if (current->data == data)
        {
            return index;
        }
        current = current->next;
        index++;
    }
    return -1;
}

bool LinkedList::contains(int data)
{
    return this->indexOf(data) != -1;
}

void LinkedList::removeFirst()
{
    if (this->isEmplty())
        return;
    if (head == tail)
    {
        delete head;
        tail->next = nullptr;
    }
    Node *temp = head->next;
    delete head;
    head = temp;
}
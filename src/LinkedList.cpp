#include "LinkedList.h"

LinkedList::LinkedList() : head(nullptr), tail(nullptr), size(0)
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
    size++;
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
    size++;
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
    if (this->head == this->tail)
    {
        delete head;
        this->head = this->tail = nullptr;
        size--;
        return;
    }
    Node *temp = this->head->next;
    delete this->head;
    this->head = temp;
    size--;
}

void LinkedList::removeLast()
{
    if (isEmplty())
        return;

    if (this->head == this->tail)
    {
        delete this->head;
        this->head = this->tail = nullptr;
        size--;
        return;
    }

    auto previous = getPrevious(this->tail);
    if (previous)
    {
        delete previous->next;
        previous->next = nullptr;
        this->tail = previous;
        size--;
    }
}

Node *LinkedList::getPrevious(Node *node)
{
    auto current = this->head;
    while (current)
    {
        if (current->next == node)
            return current;
        current = current->next;
    }
    return nullptr;
}

int LinkedList::getSize()
{
    return this->size;
}
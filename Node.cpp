#include "Node.h"
#include <iostream>

Node::Node() : data(0), next(nullptr)
{
}

Node::Node(int data) : data(data), next(nullptr)
{
}

Node::~Node()
{
    std::cout << "Node deleted" << std::endl;
}
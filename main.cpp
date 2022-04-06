#include <iostream>
#include "LinkedList.h"

int main(void)
{
    LinkedList data;
    data.add_to_first(4); // To add value to the first ot the list
    data.add_to_last(6);  // To add value at the end of the list
    data.removeFirst();   // To remove first value of the list
    data.removeLast();    // To remove last value of the list
    data.indexOf(4);      // to get index of a vale;
    data.contains(6);     // To check if a value exist in the list
    return 0;
}
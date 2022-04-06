#include <iostream>
#include "LinkedList.h"

int main(void)
{
    LinkedList data;
    // for (int i = 0; i <= 1000; i++)
    // {
    //     data.add_to_last(i * 3 + i / 3);
    // }

    data.add_to_last(6);
    data.add_to_last(3);
    // data.add_to_first(4);
    // data.removeFirst();
    data.removeLast();
    std::cout << "the index is of 4 is " << data.indexOf(3) << std::endl;

    return 0;
}
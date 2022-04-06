#include <iostream>
#include "LinkedList.h"

int main(void)
{
    LinkedList data;
    data.add_to_first(3);
    data.removeFirst();

    std::cout << data.getSize() << std::endl;

    return 0;
}
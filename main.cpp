#include <iostream>
#include "src/LinkedList.h"

int main(void)
{
    LinkedList data;
    data.add_to_first(4);
    data.add_to_last(7);
    data.add_to_last(6);
    data.reverse();

    int *arry = data.toArry();

    for (int i = 0; i < data.getSize(); i++)
    {
        std::cout << arry[i] << std::endl;
    }
    delete arry;
    return 0;
}

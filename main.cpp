#include <iostream>
#include "src/LinkedList.h"

int main(void)
{
    LinkedList data;
    data.add_to_first(4);
    data.add_to_first(7);
    data.add_to_first(6);

    int *arry = data.toArry();

    for (int i = 0; i < data.getSize(); i++)
    {
        std::cout << arry[i] << std::endl;
    }
    delete arry;
    return 0;
}
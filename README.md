# MyLinkedList

this is a implementation of linked list in CPP. I did it for learning purpose.

## Usage

```cpp
#include <iostream>
#include "LinkedList.h"

int main(void)
{
    LinkedList data;
    data.add_to_first(4); // To add value to the first of the list
    data.add_to_last(6);  // To add value at the end of the list
    data.removeFirst();   // To remove first value of the list
    data.removeLast();    // To remove last value of the list
    data.indexOf(4);      // to get index of a value;
    data.contains(6);     // To check if a value exists in the list
    data.toArry();       // Returns a Arry pointer of the list
    data.reverse();      // To reverse the list
    return 0;
}
```

## License

[MIT](https://choosealicense.com/licenses/mit/)

#include <iostream>

#include "list.h"

void print(List<int>& arg)
{
    for (List<int>::iterator it = arg.begin(); it != arg.end(); it++) {
        std::cout << *it << ' ';
    }
    std::cout << '\n';
}

main()
{
    List<int> myList;
    for (int i = 1; i <= 10; i++) {
        myList.add(i);
    }
    print(myList);

    List<int> copiedList;
    copiedList = myList;
    print(copiedList);

    myList.add(43);
    print(myList);
    print(copiedList);
}

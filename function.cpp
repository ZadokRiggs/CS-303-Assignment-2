#include "function.h"
#include "deque.h"
#include "stack.h"



void read_list(Deque deque) {
    object temp = deque.front();
    int i = 0;
    while (temp.next != nullptr) {
        std::cout << i << "-" << temp.num << " | ";
        temp = *temp.next;
        i++;
    }
    std::cout << " " << i << "-" << temp.num;
    std::cout << std::endl << std::endl;
}


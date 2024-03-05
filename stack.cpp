#include "stack.h"
#include <numeric>

//adds a new element to the top
void Stack::push_front(int value) {
    num.push_back(value);
}

//deletes the top element
void Stack::pop_front() {
    if (!empty()) {
        num.pop_back();
    }
}

//checks if stack is empty
bool Stack::empty() {
    return num.empty();
}

//returns the top element  
int Stack::top() {
    if (empty()) {
        return -999;
    }
    return num.back();
}

//returns the average of all numbers in the stack
double Stack::average() {
    if (empty()) {
        return -999;
    }
    double sum = 0;
    for (int i = 0; i < num.size(); i++) {
        sum += num[i];
    }
    return sum / num.size();


}

void Stack::read_stack() {
    for (int i = 0; i < num.size(); i++) {
        std::cout << i << "-" << num[i] << " | ";
    }
}
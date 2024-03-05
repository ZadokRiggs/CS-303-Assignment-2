//name: Zadok Riggs
//date: 3/4/24
//Assignment 2

#include "function.h"
#include "stack.h"
#include "deque.h"

using namespace std;

int main() {
    Deque stack;

    for (int i = 0; i <= 5; i++) {
        stack.push_front(i * 10);
    }

    cout << "------- Q1 -------" << endl;
    read_list(stack);

    cout << "pop_front ";
    stack.pop_front();
    read_list(stack);

    cout << "pop_back ";
    stack.pop_back();
    read_list(stack);

    cout << "push_back ";
    stack.push_back(999);
    read_list(stack);

    cout << "push_front ";
    stack.push_front(888);
    read_list(stack);

    cout << "bool empty: " << stack.empty() << endl << endl;

    cout << "insert at 3 ";
    stack.insert(3, 777);
    read_list(stack);

    cout << "remove at 5 ";
    stack.remove(5);
    read_list(stack);

    cout << "find 777: " << stack.find(777) << endl;
    cout << "--------------------" << endl;

    //create a stack object
    Stack stack2;

    //check if stack is empty
    cout << "----------- Q2 -----------" << endl;
    cout << endl << "stack empty: " << stack2.empty() << endl;

    //insert into stack
    cout << endl << endl << "push_front " << endl;
    stack2.push_front(999);
    stack2.read_stack();

    cout << endl << endl << "push a few more " << endl;
    stack2.push_front(111);
    stack2.push_front(222);
    stack2.push_front(333);
    stack2.read_stack();

    //remove an element from the stack
    cout << endl << endl << "pop_front " << endl;
    stack2.pop_front();
    stack2.read_stack();

    //find the top of the stack
    cout << endl << endl << "top == " << stack2.top() << endl;

    //find the average value of stack elements
    cout << endl << "average == " << stack2.average() << endl;
}

#include <vector>
#include <iostream>

class Stack {
private:
	std::vector<int> num;

public:
	void push_front(int value);
	void pop_front();
	bool empty();
	int top();
	double average();
	void read_stack();
};
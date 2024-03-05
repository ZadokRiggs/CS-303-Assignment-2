#pragma once
#include <iostream>

struct object {
	int num;
	object* next;
	object(int numb, object* nex);
};

class Deque {
private:
	object* head;
	object* tail;
	int num_items;

public:
	Deque();
	void push_front(int item); // insert element at beginning
	void push_back(int item); // insert element at end
	void pop_front();        // Delete first element
	void pop_back();        // Delete last element
	object front();        // access first element
	object back();        // access last element
	bool empty();        // check if list empty
	void insert(size_t index, int item); // inserts elements at a certain point
	bool remove(size_t index); // remove a specific element
	size_t find(int item); // find a specific item
};

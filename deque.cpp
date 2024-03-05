#include "deque.h"
#include "function.h"
#include <iostream>


object::object(int numb, object* nex) {
    num = numb;
    next = nex;
}

Deque::Deque() {
    head = nullptr;
    tail = nullptr;
    num_items = 0;
}

void Deque::push_front(int item) {

    if (head == nullptr) { //deals with if list is empty
        tail = new object(item, nullptr);
        head = tail;
    }

    else { // else if list is not empty
        object* temp = new object(item, head);
        head = temp;
    }
    num_items++;
}

void Deque::push_back(int item) {
    if (head == nullptr) { //deals with if list is empty
        tail = new object(item, nullptr);
        head = tail;
    }
    else { //if list isn't empty
        tail->next = new object(item, nullptr); //sets the next value of the tail to a new object
        tail = tail->next; //moves tail to the new ending object
    }
    num_items++;
}

void Deque::pop_front() {
    object* temp = head; //creates temporary variable pointing to head
    head = head->next; //head now points to next item in list
    if (head == nullptr) { //deals with the list being empty
        tail = nullptr;
    }
    delete temp; //deletes the temporary variable
    num_items--; //decrements the number of items in the list
}

void Deque::pop_back() {
    object* temp = head;
    while (temp->next->next != nullptr) {
        temp = temp->next;
    }

    delete tail;
    tail = temp;
    tail->next = nullptr;
    num_items--;

}
object Deque::front() {
    return *head;
}
object Deque::back() {
    return *tail;

}
bool Deque::empty() {
    if (head == nullptr)
        return true;
    else
        return false;
}
void Deque::insert(size_t index, int item) {
    // Insert item at position index (starting at 0). Insert at the end if index is beyond the end of the list
    if (index == 0) {
        push_front(item);
    }
    else if (index >= num_items) {
        push_back(item);
    }
    else {
        object* current = head;
        for (size_t i = 0; i < index - 1; i++) {
            current = current->next;
        }
        object* newOb = new object(item, current->next);
        current->next = newOb;
        num_items++;
    }

}
bool Deque::remove(size_t index) { // works
    //Remove the item at position index. Return true if successful; return false if index is beyond the end of the list.
    if (index >= num_items) {
        return false;
    }

    if (index == 0) {
        pop_front();
    }
    else {
        object* temp1 = head;
        for (int i = 0; i < index - 1; i++) {
            temp1 = temp1->next;
        }
        object* temp2 = temp1->next;
        temp1->next = temp2->next;
        delete temp2;
        if (temp1->next == nullptr) {
            tail = temp1;
        }
        num_items--;
    }
    return true;
}
size_t Deque::find(int item) { // should work
    //Return the position of the first occurrence of item if it is found. Return the size of the list if it is not found
    int i = 0;
    object* temp = head;

    while (temp != nullptr) { //go through the list till item is reached
        if (temp->num == item) {
            return i;
        }
        temp = temp->next;
        i++;
    }
    return i;
}


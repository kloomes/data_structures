#include "dataStructures.h"
#include <iostream>

template <typename elem>
queue<elem>::queue() {
  head = tail = nullptr;
  count = 0;
}

template <typename elem>
queue<elem>::~queue() {
  while (head != nullptr) clear();
}

template <typename elem>
int queue<elem>::size() {
  return count;
}

template <typename elem>
bool queue<elem>::isEmpty() {
  return (head == nullptr);
}

template <typename elem>
void queue<elem>::push(elem e) {
    cell *one = new cell;
    one->value = e;
    one->next = nullptr;
    if (isEmpty()) {
      head = tail = one;
    } else {
      tail->next = one;
      tail = one;
    }
    count++;
}

template <typename elem>
elem queue<elem>::pop() {
  if (count == 0) errorMessage("Empty queue");
  elem toPop = head->value;
  cell *temp = head;
  head = head->next;
  count--;
  delete temp;
  return toPop;
}

template <typename elem>
void queue<elem>::clear() {
  cell *temp = head;
  head = head->next;
  delete temp;
}

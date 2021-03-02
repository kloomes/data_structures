#include "dataStructures.h"
#include <iostream>

template <typename elem>
stack<elem>::stack() {
  head = nullptr;
  count = 0;
}

template <typename elem>
stack<elem>::~stack() {
  while (head != nullptr) clear();
}

template <typename elem>
int stack<elem>::size() {
  return count;
}

template <typename elem>
bool stack<elem>::isEmpty() {
  return (head == nullptr);
}

template <typename elem>
void stack<elem>::push(elem e) {
  cell *one = new cell;
  one->value = e;
  one->next = head;
  count++;
  head = one;
}

template <typename elem>
elem stack<elem>::pop() {
  if (count == 0) errorMessage("Empty stack");
  elem toPop = head->value;
  cell *temp = head;
  head = head->next;
  count--;
  delete temp;
  return toPop;
}

template <typename elem>
void stack<elem>::clear() {
  cell *temp = head;
  head = head->next;
  delete temp;
}

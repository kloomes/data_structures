A basic set of data structure storage devices for C++.

Stack

Basic LIFO stack using linked list structure.

Usage:

stack<int> test;
test.push(1);
test.pop();
test.size();
test.isEmpty();

Functionality (given type elem):

.push(elem) to top of stack, return void
.pop() gets elem from top of stack and removes from stack, return elem
.size() gets size of stack, returns int
.isEmpty() returns bool true if stack is empty, false if not

Queue

Basic FIFO queue using linked list structure.

Usage:

queue<int> test;
test.push(1);
test.pop();
test.size();
test.isEmpty();

Functionality (given type elem):

.push(elem) to back of queue, return void
.pop() gets elem from front of queue and removes from queue, return elem
.size() gets size of queue, returns int
.isEmpty() returns bool true if queue is empty, false if not


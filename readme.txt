A basic set of data structure storage devices for C++.

Stack

Basic LIFO stack using linked list structure.

Usage (given type elem)::

stack<elem> test;
test.push(elem);
test.pop();
test.size();
test.isEmpty();

Queue

Basic FIFO queue using linked list structure.

Usage (given type elem):

queue<elem> test;
test.push(elem);
test.pop();
test.size();
test.isEmpty();

Collection

A simple vector style collection designed with random sampling in mind. Can pick single elements from collection at random or vector with a specific number of random elements. Both can remove the element form collection or allow it to remain.

Usage examples could include representing a deck of cards or any other form of array where the main usage will be selecting element at random. Please not no ability to directly access a specific element.

Usage (given type elem):

collection<elem> test; - declares new collection test
test.push(elem); - pushes elem to back of collection
test.size(); - return int with size of collection
test.contains(elem); - return bool true if elem is in collection, false otherwise
test.pick(); - returns one elem from collection at random
test.pluck(); - returns one elem from collection at random and removes it from collection
test.sample(n); - return vector of size n containing random n random elem from collection (as not removed can contain same elem multiple times)
test.extract(n); - return vector of size n containing n random elems, each being removed from collection in turn (such as running pluck() n times)

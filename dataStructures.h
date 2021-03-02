#ifndef dataStructures_h
#define dataStructures_h
#include <string>
#include <iostream>
#include <vector>

void errorMessage(std::string s) {
  std::cerr << "Error: " << s << std::endl;
  exit(-1);
}

template <typename elem>
class stack {
  public:
    stack();
    ~stack();

    void push(elem e);
    elem pop();
    int size();
    bool isEmpty();

  private:
    int count;
    void clear();
    struct cell {
      elem value;
      cell *next;
    };
    cell *head;
};

template <typename elem>
class queue {
  public:
    queue();
    ~queue();

    void push(elem e);
    elem pop();
    int size();
    bool isEmpty();

  private:
    int count;
    void clear();
    struct cell {
      elem value;
      cell *next;
    };
    cell *head;
    cell *tail;
};

template <typename elem>
class collection {
  public:
    collection();
    ~collection();

    void push(elem e);
    elem pick();
    elem pluck();
    std::vector<elem> sample(int num = 1);
    std::vector<elem> extract(int num = 1);
    int size();
    bool contains(elem e);
  private:
    std::vector<elem> coll;
};

#include "stack.cpp"
#include "queue.cpp"
#include "collection.cpp"
#endif

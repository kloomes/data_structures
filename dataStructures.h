#ifndef dataStructures_h
#define dataStructures_h

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

#include "stack.cpp"
#include "queue.cpp"
#endif

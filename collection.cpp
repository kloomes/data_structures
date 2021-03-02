#include "dataStructures.h"
#include <iostream>
#include <vector>
#include <cstdlib>

template <typename elem>
collection<elem>::collection() {
}

template <typename elem>
collection<elem>::~collection() {
}

template <typename elem>
void collection<elem>::push(elem e) {
  coll.push_back(e);
}

template <typename elem>
int collection<elem>::size() {
  return coll.size();
}

template <typename elem>
bool collection<elem>::contains(elem e) {
  for (int i = 0; i < coll.size(); i++)
    if (coll[i] == e) return true;
  return false;
}

template <typename elem>
elem collection<elem>::pick() {
  if (coll.size() == 0) errorMessage("Empty collection");
  int i = rand() % coll.size();
  return coll[i];
}

template <typename elem>
elem collection<elem>::pluck() {
  if (coll.size() == 0) errorMessage("Empty collection");
  int i = rand() % coll.size();
  elem temp = coll[i];
  coll.erase(coll.begin() + i);
  return temp;
}

template <typename elem>
std::vector<elem> collection<elem>::sample(int num) {
  if (coll.size() == 0) errorMessage("Empty collection");
  std::vector<elem> temp;
  for (int i = 0; i <= num - 1; i++) {
    temp.push_back(pick());
  }
  return temp;
}

template <typename elem>
std::vector<elem> collection<elem>::extract(int num) {
  if (coll.size() == 0) errorMessage("Empty collection");
  std::vector<elem> temp;
  for (int i = 0; i <= num - 1; i++) {
    if (coll.size() == 0) errorMessage("Extract size larger than collection");
    temp.push_back(pluck());
  }
  return temp;
}

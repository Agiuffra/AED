#include <iostream>
#include "solution.h"
#include "tester.h"

using namespace std;

int main() {
  CircularArray<int>* array = new CircularArray<int>(8);
  ASSERT(array->is_empty() == true, "The function is_empty is not working");
  ASSERT(array->is_full() == false, "The function is_full is not working");
  ASSERT(array->size() == 0, "The function size is not working");
  array->push_front(5);
  array->push_front(10);
  ASSERT(array->pop_front() == 10, "The function push_front/pop_front is not working");
  array->push_back(20);
  array->push_back(15);
  ASSERT(array->pop_back() == 15, "The function push_back/pop_back is not working");
  array->push_back(30);
  array->push_back(8);
  array->push_back(10);
  array->insert(50, 2);
  array->sort();
  ASSERT(array->is_sorted(array) == true, "The function sort is not working");
  delete array;
  
  return 0;
}
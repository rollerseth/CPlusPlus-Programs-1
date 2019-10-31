/*

#Filename: collection.h
#Name: Seth Roller
#Date: 2/12/19
#Program Name: assign2.cpp
#Assignment Number: 1
#Problem: Creating a template class to
hold objects with a number of functions
#Flow: The header file contains the function declarations,
while the collection.cpp has the filled in functions, and
then the main program has a while true loop for users to 
make decisions for the collections
#Sources:
*Andrew Chupka-on how arrays function in C++
*http://mathcs.wilkes.edu/~bracken/cs226/sp2019/labs.html
*Dr. Bracken helped me with the opertors 

I have thoroughly tested my code and it works properly

*/

#include <iostream>
using namespace std;
#define MAX 20

template <class T> class collection {
  
 public:
  collection();
  
  bool isEmpty();
  void makeEmpty();
  bool insert(T item);
  bool remove(int& removeRef);
  bool contains(T item);
  void display();
  void operator=(const collection<T>& Rhs);
  bool operator==(const collection<T>& Rhs);

 private:
  int size;
  T theBox[MAX];
  
};

#include "collection.cpp"

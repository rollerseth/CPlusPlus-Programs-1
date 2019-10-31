/*
#Filename: listj.h

#Author: Seth Roller

#Date: 3/14/19

#Program Name: assign43.cpp

#Assignment Number: 4.3

#Problem: Will create a abstract data type(ADT)
list that will hold structs that contain
an integer and a pointer to a node. The list will
be a circular list. Will be performing the Josephus 
problem 

#Flow: The header file contains the function declarations,
while the listc.cpp file has the filled in functions. The list
is comprised of nodes and the functions range from display to 
insertion. 

#Sources:
*http://mathcs.wilkes.edu/~bracken/cs226/
*link above was used for the skeleton files

I have thoroughly tested my code and it works properly 

 */


#include<cassert>
#include<iostream>
#include<string>
#include<fstream>
using namespace std;

struct node
{
  int item;
  node *next;
};

class list
{
  public:
  list();
  list(const list& copy);
  list(string filename);
  
  ~list();
  //list operations
  void displayList() const;
  int findElement(int element) const;
  void insertElement(int element);
  bool deleteElement(int element);
  void addData(string filename);
  
  int numberOfElements() const;
  int Josephus(int m); 

 private:
  node *head;
  node *tail;
  int numberofelements;


};

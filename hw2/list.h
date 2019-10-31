/*
#Filename: list.h

#Author: Seth Roller

#Date: 2/21/19

#Program Name: assign4a.cpp

#Assignment Number: 4a

#Problem: Will create a abstract data type(ADT)
list that will hold structs that contain
an integer and a pointer to a node. 

#Flow: The header file contains the function declarations,
while the list.cpp file has the filled in functions. The list
is comprised of nodes and the functions range from display to 
insertion. 

#Sources:
*http://mathcs.wilkes.edu/~bracken/cs226/sp2012/assign4a.html
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
  
  ~list();
  //list operations
  void displayList() const;
  int findElement(int element) const;
  void insertElement(int element);
  bool deleteElement(int element);
 
  int numberOfElements() const;

  private:
  node *head;
  int numberofelements;


};

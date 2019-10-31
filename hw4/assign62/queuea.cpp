/*
#Filename: queuea.cpp

#Author: Seth Roller

#Date: 3/19/19

#Program Name: assign62.cpp

#Assignment Number: 62

#Problem: Will create a abstract data type(ADT)
queue through an dynamically allocated array

#Flow: This file will contain all the function code that
will operate on the main file through the menu driven program

#Sources:
*http://mathcs.wilkes.edu/~bracken/cs226/
*link above was used for the skeleton files
*Dr. Bracken aided me with using the mod operator to insert and delete

I have thoroughly tested my code and it works properly 

 */
#include "queuea.h"  // header file
#include <stddef.h>  // for NULL
#include <iostream>

queueClass::queueClass()  
{
  numberofqueueelements=0;
  front = 0;
  back = 0;
  maxSize = 10;
  theArray = new int[maxSize];
  cout << "Constructor is executing" << endl;

}  // end default constructor



queueClass::~queueClass()
{
  bool result = true;

  while (result == true) 
    QueueDelete(result);

  cout << "Deconstructor is executing" << endl;

}  // end destructor

bool queueClass::QueueIsEmpty() const
{
	return bool(numberofqueueelements == 0);

}  // end QueueIsEmpty

void queueClass::QueueInsert(queueItemType NewItem,
                             bool& Success)
{

  //if the queue is empty
  if (numberofqueueelements == 0) {
    theArray[0] = NewItem;
    numberofqueueelements++;
    Success = true;
  }

  //any scenerio with the list filled
  else {
    //if the array needs to be resized
    if (numberofqueueelements == maxSize) {
      int *newQueue = new int[maxSize + 5];
      int start = front;
      //new array starts at index 0 so front will be
      //set to zero after
      for (int j = 0; j < numberofqueueelements; j++) {
	newQueue[j] = theArray[start];
	start = (start + 1) % maxSize;
      }
      delete theArray;
      theArray = newQueue;
      //reaadjust the front and back
      back = maxSize - 1;
      maxSize = maxSize + 5;
      front = 0;
      back = (back + 1) % maxSize;
      theArray[back] = NewItem;
      Success = true;
      numberofqueueelements++;
    }
    
    // if the array does not exceed its limit
    else {
      back = (back + 1) % maxSize;
      theArray[back] = NewItem;
      Success = true;
      numberofqueueelements++;
    }
    
  }
  
  
}  // end QueueInsert

void queueClass::QueueDelete(bool& Success)
{
  if (numberofqueueelements == 0)
    Success = false;

  //if the size is one the array will be set back to size 10
  else if (numberofqueueelements == 1) {
    maxSize = 10;
    delete theArray;
    theArray = new int[maxSize];
    Success = true;
    back = 0;
    front = 0;
    numberofqueueelements--;
  }

  else {
    front = (front + 1) % maxSize;
    numberofqueueelements--;
    Success = true;
  }

}  // end QueueDelete

void queueClass::QueueDelete(queueItemType& QueueFront, 
                             bool& Success)
{
  
  if (numberofqueueelements == 0)
    Success = false;

  //if the size is one the array will be set back to size 10
  else if (numberofqueueelements == 1) {
    QueueFront = theArray[front];
    delete theArray;
    maxSize = 10;
    theArray = new int[maxSize];
    Success = true;
    back = 0;
    front = 0;
    numberofqueueelements--;
  }

  else {
    QueueFront = theArray[front];
    front = (front + 1) % maxSize;
    numberofqueueelements--;
    Success = true;
  }
}  // end QueueDelete

void queueClass::GetQueueFront(queueItemType& QueueFront, 
                               bool& Success) const
{
  
  if (numberofqueueelements == 0)
    Success = false;

  else {
    QueueFront = theArray[front];
    Success = true;
  }
  
}  // end GetQueueFront

void queueClass::QueuePrint() const
{
  //create a temp pointer to traverse through the queue

  if (numberofqueueelements == 0)
    cout << "The queue is empty" << endl;

  else {
    int i = 0;
    int temp = front;
    while (i < numberofqueueelements) {
      cout << theArray[temp] << endl;
      if (temp == (maxSize - 1)) 
	temp = -1;
      temp++;
      i++;
    } // end of while
  }

}

int queueClass::NumberOfQueueElements() const
{
  return numberofqueueelements;    
}
// End of implementation file.
 













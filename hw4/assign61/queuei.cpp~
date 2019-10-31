// *********************************************************
// Implementation file QueueP.cpp for the ADT queue.
// Pointer-based implementation.
// *********************************************************
/*
#Filename: queuei.cpp

#Author: Seth Roller

#Date: 3/19/19

#Program Name: assign61.cpp

#Assignment Number: 6.1

#Problem: Will create a abstract data type(ADT)
queue that will hold structs that contain
an integer and a pointer to a queueNode. This queue 
is a circular one

#Flow: The layout is all the functions filled in.
The functions will be utilized in the main program 

#Sources:
*http://mathcs.wilkes.edu/~bracken/cs226/
*link above was used for the skeleton files

I have thoroughly tested my code and it works properly 

 */
#include "queuei.h"  // header file
#include <stddef.h>  // for NULL
#include <iostream>
// The queue is implemented as a circular linked list
// with one external pointer to the back of the queue.
struct queueNode
{  queueItemType Item;
   ptrType       Next;
};  // end struct

queueClass::queueClass()  
{
  numberofqueueelements=0;
  BackPtr=NULL;

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
	return bool(BackPtr == NULL);

}  // end QueueIsEmpty

void queueClass::QueueInsert(queueItemType NewItem,
                             bool& Success)
{

  //if the queue is empty
  if (numberofqueueelements == 0) {
    queueNode *newOne = new queueNode;
    newOne->Item = NewItem;
    newOne->Next = newOne;
    BackPtr = newOne;
    numberofqueueelements++;
    Success = true;
  }

  //any scenerio with the list filled
  else {
    queueNode *newOne = new queueNode;
    newOne->Item = NewItem;
    newOne->Next = BackPtr->Next;
    BackPtr->Next = newOne;
    BackPtr = newOne;
    numberofqueueelements++;
    Success = true;
  }
  
  
}  // end QueueInsert

void queueClass::QueueDelete(bool& Success)
{
  
  //if the list is empty
  if (BackPtr == NULL)
    Success = false;

  // if it is not empty
  else {

    if (numberofqueueelements == 1) {
      delete BackPtr;
      BackPtr = NULL;
      numberofqueueelements--;
      Success = true;
    }

    else {
      ptrType toDelete = BackPtr->Next;
      ptrType newFront = toDelete->Next;
      BackPtr->Next = newFront;
      delete toDelete;
      toDelete = NULL;
      numberofqueueelements--;
      Success = true;
    }
    
  } // end of first else
  

}  // end QueueDelete

void queueClass::QueueDelete(queueItemType& QueueFront, 
                             bool& Success)
{
  if (BackPtr == NULL)
    Success = false;

  else {
    
    if (numberofqueueelements == 1) {
      QueueFront = BackPtr->Item;
      delete BackPtr;
      BackPtr = NULL;
      numberofqueueelements--;
      Success = true;
    }
    
    else {
      ptrType toDelete = BackPtr->Next;
      ptrType newFront = toDelete->Next;
      QueueFront = toDelete->Item;
      BackPtr->Next = newFront;
      delete toDelete;
      toDelete = NULL;
      numberofqueueelements--;
      Success = true;
    }
    
  } // end of first else
  
}  // end QueueDelete

void queueClass::GetQueueFront(queueItemType& QueueFront, 
                               bool& Success) const
{
  
  if (numberofqueueelements == 0)
    Success = false;

  else {
    ptrType front = BackPtr->Next;
    QueueFront = front->Item;
    Success = true;
  }
  
}  // end GetQueueFront

void queueClass::QueuePrint() const
{
  //create a temp pointer to traverse through the queue

  if (numberofqueueelements == 0)
    cout << "The queue is empty" << endl;

  else {
    //wont print the backPtr so that is done outside the while
    // loop
    ptrType front = BackPtr->Next;
    while (front != BackPtr) {
      cout << front->Item << endl;
      front = front->Next;
    }
    cout << BackPtr->Item << endl;
    
  }

}

int queueClass::NumberOfQueueElements() const
{
  return numberofqueueelements;    
}
// End of implementation file.
 













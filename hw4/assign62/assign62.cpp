/*
#Filename: assign62.cpp

#Author: Seth Roller

#Date: 3/19/19

#Program Name: assign62.cpp

#Assignment Number: 62

#Problem: Will create a abstract data type(ADT)
queue through an dynamically allocated array

#Flow: The main file will have the layout for the menu
decision process. This utilizes a while true
loop until specified

#Sources:
*http://mathcs.wilkes.edu/~bracken/cs226/
*link above was used for the skeleton files
*Dr. Bracken aided me with using the mod operator to insert and delete

I have thoroughly tested my code and it works properly 

 */


#include<fstream>
#include<cassert>
#include<iostream>
#include"queuea.h"
#include<string>

int main()
{
  // for turnin
  cout << endl;

  // DECLARATIONS

  queueClass queue1; 
  bool answer = true;
  bool theLoop = true;
  int option = 0;
  int item = 0;

  cout << endl;
  cout << "Name: Seth Roller" << endl;
  cout << "Lab Name: Queues" << endl;
  cout << "Problem: An ADT called queue has been implemented ";
  cout << endl;
  cout << "so that users can modify a queues's contents." << endl;
  cout << endl;
  
  cout << "1. Enqueue data onto queue" << endl;
  cout << "2. Dequeue and print data from the queue" << endl;
  cout << "3. Print data at the front without dequeing" << endl;
  cout << "4. Print entire queue" << endl;
  cout << "5. Print status: empty or not empty" << endl;
  cout << "6. Exit the menu loop" << endl << endl;

  while (theLoop) {

    cout << "Enter your option: ";
    cin >> option;
    cout << endl; // for turnin
    
    // checks to see if the entered input is an integer
    if (!cin.good()) {
      cin.clear();
      cin.ignore(120, '\n');
      
      cout << "Invalid input!" << endl << endl;
      cout << endl;
      cout << "Please enter an integer that is between 1 and 6";
      cout << "\n\n";
      
    } // end of if
    
    // goes to check whether the integer entered is valid
    // through a switch case
    
    else {
      cout << "You entered " << option << endl << endl;
      
     // if statement to check if option is in the bounds
      
     if (option >= 1 && option < 6) {
       
       switch (option) {
       case 1:
	 while (true) {
	   cout << "Enter an integer: ";
	   cin >> item;
	   if (cin.good()) {
	     queue1.QueueInsert(item, answer);
	     cout << endl; // for turnin                                   
	     cout << "You entered " << item << endl << endl;
	     break;
	   }
          cout << endl << endl;
          cout << "Invalid input, enter an integer";
          cout << endl << endl;
          cin.clear();
          cin.ignore(120, '\n');
	 }
	 cout << item << " was added into the queue";
	 cout << "\n\n";
	 break;

       case 2:
	 queue1.QueueDelete(item, answer);
	 if (answer == true)
	   cout << item << " has been deleted from the queue" << "\n\n";
	 else
	   cout << "The queue is empty" << "\n\n";
	 break;
	 
       case 3:
	 queue1.GetQueueFront(item, answer);
	 if (answer == true) 
	   cout << "The front of the queue: " << item << endl;
	 cout << endl;
	 break;

       case 4:
	 queue1.QueuePrint();
	 cout << endl;
	 break;
	 
       case 5:
	 if (queue1.QueueIsEmpty() == true)
	   cout << "The queue is empty" << endl << endl;
	 else
	   cout << "The queue is NOT empty" << endl << endl;
	 break;
	 
	  } // end of switch 
     }

     else if (option == 6) {
       theLoop = false;
     }

     else {
       cout << "Invalid Input!" << endl;
       cout << "Please enter an integer that is between 1 and 6";
       cout << endl << endl;
     }

    } // end of 1st else


  }

  return 0;
  
}//end of main

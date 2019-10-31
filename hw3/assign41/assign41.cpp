/*
#Filename: assign41.cpp

#Author: Seth Roller

#Date: 3/14/19

#Program Name: assign41.cpp

#Assignment Number: 4.1

#Problem: Will create a abstract data type(ADT)
list that will hold structs that contain
an integer and a pointer to a node. 

#Flow: The main file the layout for the menu
decision process. This utilizes a while true
loop until specified

#Sources:
*http://mathcs.wilkes.edu/~bracken/cs226/
*link above was used for the skeleton files

I have thoroughly tested my code and it works properly 

 */

#include "list.h"
using namespace std;


int main()
{
  // for turnin
  cout << endl;

  // DECLARATIONS

  // the two collection defined have an array
  // of ints, where the max size is 20 
  bool delanswer = true;
  bool theLoop = true;
  int option = 0;
  int item = 0;
  int findposition = 0;


  //reading in the file

  string fn;

  cout << "Enter the name of a file: ";
  cin >> fn;
  cout << endl;
  cout << "You entered " << fn << endl;
  list mylist(fn);
  
  cout << endl;
  cout << "Name: Seth Roller" << endl;
  cout << "Lab Name: Introduction to Linked Lists" << endl;
  cout << "Problem: An ADT called list has been implemented to";
  cout << endl;
  cout << "so that users can modify a list's contents ";
  cout << "through entered input or a file's contents" << endl;
  cout << endl;
  
  cout << "1. Display the List" << endl;
  cout << "2. Find an item" << endl;
  cout << "3. Insert an element into the list" << endl;
  cout << "4. Delete an element from the list" << endl;
  cout << "5. Add elements from a file" << endl;
  cout << "6. Display the number of elements in the list" << endl;
  cout << "7. Exit the menu loop" << endl << endl;
  
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
     cout << "Please enter an integer that is between 1 and 7";
     cout << "\n\n";

   } // end of if

   // goes to check whether the integer entered is valid
   // through a switch case
   else {
     cout << "You entered " << option << endl << endl;

     // if statement to check if option is in the bounds

     if (option >= 1 && option <= 6) {

       switch (option) {
       case 1:
	 mylist.displayList();
	 break;

       case 2:
	 // while loops within cases are for
	 // additional integers to be entered
	 while (true) {
	   cout << "Enter an integer: ";
	   cin >> item;
	   if (cin.good()) {
	     findposition = mylist.findElement(item);
	     cout << endl; // for turnin

	     cout << "You entered " << item << "\n\n";
	     break;
	   }
	   cout << endl << endl;
	   cout << "Invalid input, enter an integer";
	   cout << endl << endl;
	   cin.clear();
	   cin.ignore(120, '\n'); 
	 }
	 if (findposition == 0)
	   cout << item << " was not found in the list\n\n";
	 else {
	   cout << item << " was found in position ";
	   cout << findposition << " of the list\n\n";
	 }
	 break;
	 
       case 3:
	 while (true) {
	   cout << "Enter an integer: ";
	   cin >> item;
	   if (cin.good()) {
	     mylist.insertElement(item);
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
	 cout << item << " was inserted into the list";
	 cout << "\n\n";
	 break;

       case 4:
	 while (true) {
           cout << "Enter an integer: ";
           cin >> item;
           if (cin.good()) {
             delanswer = mylist.deleteElement(item);
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
	 if (delanswer == true)
	   cout << item << " has been deleted from the list" << "\n\n";
	 else
	   cout << item << " was not found in the list" << "\n\n";
	 break;
	 
       case 5:
	 cout << "Enter the name of a file: ";
	 cin >> fn;
	 cout << endl;
	 cout << "You entered " << fn << endl;
	 mylist.addData(fn);
	 break;

       case 6:
	 if (mylist.numberOfElements() == 1) {
           cout << "The list has " << mylist.numberOfElements();
           cout << " element\n\n";
         }
         else {
           cout << "The list has " << mylist.numberOfElements();
           cout << " elements\n\n";
         }
	 break;

	  } // end of switch 
     }

     else if (option == 7) {
       //where you copy and terminate
       list newList(mylist);
       newList.displayList();
       theLoop = false;
     }

     else {
       cout << "Invalid Input!" << endl;
       cout << "Please enter an integer that is between 1 and 7";
       cout << endl << endl;
     }

   } // end of 1st else


 }

 
 
 
 return 0;
 
}//end main



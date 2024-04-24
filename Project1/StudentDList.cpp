#include "StudentDList.h"
#include "StudentNode.h"
#include "string.h"
#include <iostream>
using namespace std;

StudentDList::StudentDList(){
   StudentNode* list = head;
   head = NULL;

}

// createNode is in place to run the function made to put a new student into the list
void StudentDList::createNode(){
   StudentNode* newNode = new StudentNode;
   // newNode->firstName = firstName;
   // newNode->lastName = lastName;
   // newNode->studentID = studentID;
   // newNode->studentYear = studentYear;
//setting the next and previous nodes to NULL if the head is equal to NULL
   if(head == NULL){
      newNode->next = NULL;
      newNode->prev = NULL;
      head = newNode;
   }
      else if(head != NULL){
         StudentNode* temp = head;
         while(temp->next != NULL){
            temp = temp->next;
         }
         newNode->next = temp->next;
         temp->next = newNode;
         newNode->prev = temp;
      }

 /*
   // StudentNode *newNode; //The student node is pointing to the new created node
   StudentNode* newNode = new StudentNode; 
 
   StudentNode *nodePtr = head;
 

   //This if else statement is checking for the new node at beginning of list
   if (nodePtr == nullptr)
   {
       head = newNode;
       head->next = NULL;
   }
   else
   {
    while (nodePtr -> next)
       {
           nodePtr = nodePtr -> next;
       }
       nodePtr -> next = newNode;
       newNode -> next = NULL;
      
   }
   cout << "Student recorded Success!" << endl;
   */
}
 
 
//updateNode will update current info in a node about a student.
void StudentDList::updateNode(int studentID){
   if(head == NULL)
   {
      cout << "Nothing in the List! " << endl;
   }
   StudentNode* temp = head; //creating temp variables for the pointers 
   while(temp->next->studentID != studentID)
   {
      temp = temp->next;
   }
   cout << "Enter Student's new first name: " << endl;
   cin >> temp->next->firstName;

      cout << "Enter student's new last name: " << endl;
      cin >> temp->next->lastName;

         cout << "Enter student's new ID: " << endl;
         cin >> temp->next->studentID;
   }
//previous attempt
 /*
   StudentNode* ptr; 
   StudentNode* prev = NULL; 
   StudentNode* current; 
   int iD_no;
 
   cout << "Enter Student ID to search:" << endl; //enter the ID to search for student
   cin >> iD_no;
  
   prev = head; //setting previous and current equal to head
   current = head;
 
   //searches for the students ID num
   while(current -> studentID != iD_no && current->next != NULL)
   {
       prev = current;
       current = current ->next;
   }

   if (current -> studentID == iD_no) {
      current->updateNode();
   }
   cout << "Student Updated Sucess!" << endl;
*/
   

 
//This function will delete a student from the library
void StudentDList::deleteNode(int studentID){
   if(head == NULL)
   {
      cout << "Nothing in the list!" << endl;
   }
   else if(head->studentID == studentID)
   {
      head = head->next;
      if(head!=NULL)
      {
         head->prev = NULL;
      }
   }
   else{
      StudentNode* temp = head;
      //while loop setting the correct node to pointer in order to remove a node from the list
      while(temp->next->studentID != studentID)
      {
         temp = temp->next;
      }

      temp->next->next->prev = temp;
      temp->next = temp->next->next;
   }
}
//These are my first attempts
 /*
   StudentNode *ptr = NULL;
   StudentNode *prev = NULL;
   StudentNode *current = NULL;
 
   int iD_no;
 
   cout << "Enter student ID to erase. " << endl;
   cin >> iD_no;
 
   prev = head;
 
 
   //This deletes with similar code as updating
   while (current -> studentID != iD_no)
   {
       prev = current;
       current = current -> next;
 
   }
   prev-> next = current -> next;
   current -> next = NULL;
 
   delete current;
 
   cout << "Student has been erased!" << endl;
 /
   StudentNode* nodePtr;
   StudentNode* prevNode;
   
int iD_no;
 
   cout << "Enter student ID to erase. " << endl;
   cin >> iD_no;

   if(!head)
   return;

   if(head->iD_no == newNode){
      nodePtr = head->next;
      delete head;
      head = nodePtr;
   }
   else{
      nodePtr = head;
      while(nodePtr != nullptr && nodePtr->iD_no != newNode){
         prevNode = nodePtr;
         nodePtr = nodePtr->next;
      }
      if(nodePtr){
         prevNode->next = nodePtr;
         delete nodePtr;
      }
   }
   cout << "Student has been erased!" << endl;
}
*/

//function to search any created node that is within the list
StudentNode *StudentDList::searchNode(int studentID)
{
   if (head == NULL){
      cout << "Nothing in the list!" << endl;
      
   }

   else if(head->studentID == studentID){
      return head;
   }
   else{

      StudentNode* temp = head;

      while(temp->next != NULL){
         if(temp->next->studentID == studentID){
            return temp->next;
         }

         temp = temp->next;

      }

   }
   return head;
}

void StudentDList::printNode(){
   if (head == NULL){
      cout << "Nothing in the list!" << endl;
   }
   StudentNode* temp = head;
   while(temp->next != NULL){
      cout << "First name: " << temp->firstName << endl;
      cout << "Last name: " << temp->lastName << endl;
      cout << "Student ID: " << temp->studentID << endl;
      cout << "Student year: " << temp->studentYear << endl;

      temp = temp->next;
   }
         cout << "First name: " << temp->firstName << endl;
         cout << "Last name: " << temp->lastName << endl;
         cout << "Student ID: " << temp->studentID << endl;
         cout << "Student year: " << temp->studentYear << endl;
   
}


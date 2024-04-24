#include "Linkedlist.h"
#include <iostream>
#include "Node.h"
#include <stdlib.h>
#include <string.h>

using namespace std;

Linkedlist:: Linkedlist(){
    list = NULL;
}

Linkedlist::~Linkedlist(){
    Node *nodePtr=list;
        while(nodePtr != NULL){
            delete nodePtr;
        }
}

void Linkedlist::insertNode(){
    Node *newNode = createNode();
    Node *current = list;

    if (list == NULL || (list)->idNumber >= newNode->idNumber)
    {
        newNode->next = list;
        list =newNode;
        cout << "empty list" << endl;
        return;
    }
   
   if (searchLocation(newNode->idNumber) == NULL){
       while (current->next != NULL && current->next->idNumber < newNode->idNumber)
       current = current->next;
       newNode->next = current->next;
       current->next = newNode;
   }
   else{
       cout << "Student in system" << endl;
   }
}

void Linkedlist::deleteNode(int id){
if(searchLocation(id)) != NULL){
        delete searchLocation(id);
    }
    else
        cout << "data is not available to delete in the list" << endl;
}

void Linkedlist::printList(){
    Node* temp = list;
    while (temp != NULL){
        temp->printNode();
        temp = temp->next;
    }
}

void Linkedlist::searchNode(){
    int idTemp;
    cout << "What Student are you searching for? Enter ID: " << endl;
    cin >> idTemp;
    if (searchLocation(idTemp) != NULL){
        cout << searchLocation(idTemp) << endl;
    }
    else{
        cout << "data is not available in the list" << endl;
    }
}


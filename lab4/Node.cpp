#include <iostream>
#include "Linkedlist.h"
#include "Node.h"

Node::Node(){
    cout << "What is your First name?" << endl;
    cin >> firstName;
    cout << "What is your Last name?" << endl;
    cin >> lastName;
    cout << "What is your id number?" << endl;
    cin >> idNumber;
    next = NULL;
}

void Node::printNode(){
    cout << "Firstname: " << firstName << endl
    << "Lastname: " << lastName << endl
    << "ID:" << idNumber << endl;
}
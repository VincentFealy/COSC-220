#ifndef LINKEDLIST_CLASS
#define LINKEDLIST_CLASS
#include "Node.h"
#include <iostream>
using namespace std;

class Linkedlist{
    private:
        Node *list

        Node * createNode(){

            Node *nodePtr= new Node;

            return nodePtr;
        }

Node*  searchLocation(int studentId){
    Node *nodePtr=list;
    int i=0
    while(&nodePtr[i] != NULL){
        if(nodePtr[i].idNumber == studentId){
            return nodePtr;
        }
        i++;
    }
    return NULL;
}
    public:
    LinkedList();
    -Linkedlist();
    void insertNode();
    void deleteNode();
    void printList();
    void searchNode();
};
#endif
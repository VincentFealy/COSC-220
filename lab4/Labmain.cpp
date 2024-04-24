#include <iostream>
using namespace std;

#include "Linkedlist.h"
#include <iostream>
#include "Node.h"
#include <stdlib.h>

bool validate(int choice){
    if(choice < 1 || choice > 5){
        return false;
    }else{
        return true;
    }
}

void menu(){
    Linkedlist students;
    int choice=0;
    while (choice !=5 ){
        cout << "Student Database" << endl;
        cout << " " << endl;
        cout << "1. Insert a node" << endl;
        cout << "2. Delete a node" << endl;
        cout << "3. Print list" << endl;
        cout << "4. Search node" << endl;
        cout << "5. Quit" << endl;

        while (validate(choice) == false){
            cout << "Enter the number 1 through 5" << endl;
            cin >> choice;
        }

        if (choice == 1){
            students.insertNode():
        else if(choice == 2){
            int id;
            cout << "Enter an id to delete: ";
            cin >> id;
            students.deleteNode();
        }
        else if(choice == 3){
            students.printList();
        }
        else if(choice == 4){
            students.searchNode();
        }
        if (choice !=5){
            choice =0;
        }
        }    
        }      
    }
    int main(){
        menu();
        return 0;
    } 
}
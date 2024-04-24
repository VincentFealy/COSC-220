#include "d_rect.h"
#include "ex5_36aux.h"
#include <iostream>
using namespace std;

rectangle **getRoomArray()
{
cout << "How many rooms are there? " << endl;
int rooms;
cin >> rooms;
rectangle ** arr = new rectangle*[rooms];

for(int i=0;i<rooms;i++){
    arr[i]=new rectangle();
}
arr[rooms] = NULL;
return arr;
}


void getRoomData(rectangle ** rooms){
    double length = 0;
    double width = 0;
    int i = 0;
    while(rooms[i] != NULL){
        cout << "What is the length of room" << i+1;
        cin >> length;
        cout << "What is the width of room" << i+1;
        cin >> width;
        rooms[i]->setSides(length, width);
        i++;
    }
}

double 
(rectangle ** rooms){
    double area = 0;
    int i = 0;
    while(rooms[i]!=NULL){
        area += rooms[i]->area();
        i++;
    }
    return area;
}

rectangle largestPerimeter(rectangle ** rooms){
    rectangle largeP=*rooms[0];
    int i;
        while(rooms[i]!=nullptr){
            if(2*(rooms[i]->getLength())+(2*(rooms[i]->getWidth()))>(2*(largeP.getLength()))+(2*(largeP.getWidth())))
            largeP.setSides(rooms[i]->getLength(),rooms[i]->getWidth());
        i++;
        }
    return largeP;
    }



void reportOnLargest(rectangle & largeRoom)
{
cout << "The largest perimeter: " << (2*(largeRoom.getLength())+(2*(largeRoom.getWidth()))) << endl;
cout << "It had a length of: " << largeRoom.getLength() << endl;
cout << "It had a width of: " << largeRoom.getWidth() << endl;
}
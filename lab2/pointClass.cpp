#include <iostream>
#include "Point.h"
using namespace std;


int main(){
    Point p1(0 , 1);
    Point p2(4 , 5);
    
    cout<<"before, point1 x , point1 y : ";
    cout<<p1.getX()<<" "<<p1.getY()<<"\n";
    p1.setX(1);

    cout<<"after, point1 x , point1 y : ";
    cout<<p1.getX()<<" "<<p1.getY()<<"\n";

    float dis = p1 + p2;

    cout<<"distance between point1 and point2 : ";
    cout << dis <<"\n";

    return 0;
}

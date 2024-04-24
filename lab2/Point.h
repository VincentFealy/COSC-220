#include <iostream>
#ifndef POINT_H
#define POINT_H
using namespace std;

class Point{
    
    float x;
    float y;
    public:
        
        Point(){
            x = 0.0;
            y = 0.0;
        }
        
        Point(float x , float y){
            this->x = x;
            this->y =y;
        }
        
        void setX(float xc){
            x = xc;
        }
        
        void setY(float yc){
            y = yc;
        }
        
        float getX() const {
            return x;
        }
        
        float getY() const {
            return y;
        }
        
        float operator+(Point& p){
            return sqrt(pow(x - p.getX(),2) + pow(y - p.getY(),2));
        }
};

#endif
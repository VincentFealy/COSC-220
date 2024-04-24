#include <iostream>
//#include "dynClass.h"
using namespace std;

//constructor member1 member2
//Copy Constructor object1 object2
//deconstructor new member old member
template <typename T>
class dynClass
{
   public:
         // constructor
         dynClass(int m1, int m2);
         // copy constructor
         dynClass(const dynClass& obj);
         // destructor
         ~dynClass();
         // assignment operator
         dynClass& operator= (const dynClass& obj);
   private:
         // data of int and a pointer to data of int
         int member1;
         int *member2;
};
// use constructor initialization list to give member1 the
// value m1 and allocate dynamic memory associated with member2
// and initialize it to with the value m2

template <class T>
dynClass<T>::dynClass(int m1, int m2)
{
    cout << "Constructor " << " " << m1 << " " << m2 << endl;
    member1 = m1;
    member2 = new int(m2);
}

// initialize new object to have the
// same data as obj. use constructor initialization
// list to give member1 the value member1 of obj and
// allocate dynamic memory associated with member2 and
// initialize it with the value pointed by member2 of obj.
template <class T>
dynClass<T>::dynClass(const dynClass& obj)
{
    member1 = obj.member1;
    member2 = new int(*obj.member2);
    cout << "Copy Constructor " << " " << obj.member1 << " " << *obj.member2 << endl;
}

// destructor. deallocates the dynamic memory allocated
// by the constructor and display “Destructor is called
//
template <class T>
dynClass<T>::~dynClass()
{
    cout << "Destructor " << " " << member1 << " " << *member2 << endl;
    delete member2;
    cout << "Destructor is called\n";
}

// overloaded assignment operator=. returns a reference to
// current object.
// copy static data member from obj to the current object
// contents of dynamic memory must be same as that of obj
template <class T>
dynClass<T> &dynClass<T>::operator=(const dynClass &obj)
{
    member1 = obj.member1;
    *member2 = *obj.member2;
    return *this;
}

int main(){
    dynClass<int> oper(1, 2);
    dynClass<int> copy(oper);
    dynClass<int> equal(6, 9);
    oper = equal;
}

/*outputs
Vincents-MacBook-Pro:lab9 vincentfealy$ g++ -c dynClass.cpp
Vincents-MacBook-Pro:lab9 vincentfealy$ g++ -o dyn dynClass.o
Vincents-MacBook-Pro:lab9 vincentfealy$ ./dyn
Constructor  1 2
Copy Constructor  1 2
Constructor  6 9
Destructor  6 9
Destructor is called
Destructor  1 2
Destructor is called
Destructor  6 9
Destructor is called
*/
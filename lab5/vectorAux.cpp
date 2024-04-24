/*
 vectorAux.cpp
 Implementations of template functions
 Cosc-220   Lab 7
 
 Thomas Anastasio
 Created: February 25, 2003
 Current: March 13, 2003
*/
 
 
//////////   THIS CODE IS PROVIDED TO STUDENTS   /////////////
 
 
#include "vectorAux.h"
 
#include <vector>
#include <algorithm>
#include <iostream>
 
template <typename T>
void removeDup(std::vector<T> & v)
{
   unsigned int index;
   unsigned int i = 0; 
 
while(i < v.size()){ 
  //while using sequential search and the unsigned index
  index = seqVectSearch(v, i+1, v.size(), v[i]);
 
  if(index != v.size()) {
     v.erase(v.begin()+index); 
  }
  else
    i++;
    }

}
 
 
template <typename T>
unsigned seqVectSearch(const std::vector<T> & v, unsigned first, unsigned last, const T& target)
{
 
   for (unsigned int i = first; i<last; i++){
       if (v[i] == target)
       return i;
   }
 return last;// return last if target not found
}
 
template <typename T>
void writeVector(const std::vector<T> & v)
{
 unsigned i;
 unsigned n = v.size();
 
 for (i = 0; i < n; i++)
   std::cout << v[i] << ' ';
 std::cout << std::endl;
}
 

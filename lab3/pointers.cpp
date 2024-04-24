/*
  Pointers.cpp
  COSC-220 Lab 9
  Based on a lab designed by Thomas Horseman

  Thomas Anastasio
  Created: April 8, 2001
  Current: March 20, 2003
*/

#include <iostream>
#include <stddef.h>     // for NULL definition

int main()
{
  using namespace std;

  int int1 = 1, int2 = 2, int3 = 3;
  double dub1 = 1.0, dub2 = 2.0, dub3 = 3.0;
  float flt1 = 1.0f;
  char chr1 = 'a', chr2 = 'b';

  //////////////////////////////////////////////////////////////////	
  // 1. Experiment with storage sizes and addresses of various data
  // types.
  //////////////////////////////////////////////////////////////////	
  //  A.  Add statements to print the addresses of each of the 9
  //  variables declared above and record the addresses. 
  //  B.  Add statements to print the sizes (in bytes) of each of the
  //  9 variables  (use the sizeof operator).
  //  C.  Add statements to print the sizes of the addresses of the 9
  //  variables (again, use the sizeof operator).
	
  //  Write your code here:

cout << "The address of int1 is " << &int1 <<endl;
cout << "The address of int2 is " << &int2 <<endl;
cout << "The address of int3 is " << &int3 <<endl;

cout << "The address of dub1 is " << &dub1 <<endl;
cout << "The address of dub2 is " << &dub2 <<endl;
cout << "The address of dub3 is " << &dub3 <<endl;

cout << "The address of f1t1 is " << &flt1 <<endl;

cout << "The address of chr1 is " << &chr1 <<endl;
cout << "The address of chr2 is " << &chr2 <<endl;


cout << "The size of int1 is " << sizeof(int1) <<endl;
cout << "The size of int2 is " << sizeof(int2) <<endl;
cout << "The size of int3 is " << sizeof(int3) <<endl;

cout << "The size of dub1 is " << sizeof(dub1) <<endl;
cout << "The size of dub2 is " << sizeof(dub2) <<endl;
cout << "The size of dub3 is " << sizeof(dub3) <<endl;

cout << "The size of flt1 is " << sizeof(flt1) <<endl;

cout << "The size of chr1 is " << sizeof(chr1) <<endl;
cout << "The size of chr2 is " << sizeof(chr2) <<endl;

cout << "The size of address int1 is " << sizeof(&int1) <<endl;
cout << "The size of address int2 is " << sizeof(&int2) <<endl;
cout << "The size of address int3 is " << sizeof(&int3) <<endl;

cout << "The size of address dub1 is " << sizeof(&dub1) <<endl;
cout << "The size of address dub2 is " << sizeof(&dub2) <<endl;
cout << "The size of address dub3 is " << sizeof(&dub3) <<endl;

cout << "The size of address flt1 is " << sizeof(&flt1) <<endl;

cout << "The size of address chr1 is " << sizeof(&chr1) <<endl;
cout << "The size of address chr2 is " << sizeof(&chr2) <<endl;

  cout << "-----------------------------------------" << endl << endl;

  // Record your results here:
  //  
  //  Variable  Size             Address            Address-Size
  //   int1      4            0x7ffee5479818             8
  //   int2      4            0x7ffee5479814             8
  //   int3      4            0x7ffee5479814             8
  //   dub1      8            0x7ffee5479808             8
  //   dub2      8            0x7ffee5479800             8
  //   dub3      8            0x7ffee54797f8             8    
  //   flt1      4            0x7ffee54797f4             8
  //   chr1      1            a                          8
  //   chr2      1            ba                         8


  // How many bytes of storage is allocated for each data type?  How
  // many bytes is allocated for each pointer (address). Notice that
  // the data types are not necessarily the same size, but the
  // pointers are.
  // 
  //The integers are 4, the dubs are 8 the floats are 4 and the Chars are 1.
  //
  // Did the address of the char variables print as you expected?  If
  // not, why not?   You can force the printed output to be
  // interpreted as a pointer by coercing it (casting) to void* like
  // this:
  //    cout << (void *) &chr1;
  //
  // Run the program again, using the coercion for the char
  // pointers. Record your data.

  // Write your modified code here:

cout << (void *) &chr1 << endl;
cout << (void *) &chr2 << endl;


  cout << "-----------------------------------------" << endl << endl;


  // Record your results here:
  //  
  //  Variable  Size   Address   Address-Size
  //     chr1     1       a           8
  //     chr2     1       ba          8

  //////////////////////////////////////////////////////////////////	
  // 2. Experiment with pointer variables.
  //////////////////////////////////////////////////////////////////	
  //   A. Declare pointer vaiables intPtr1, intPtr2, intPtr3, dubPtr1,
  //   dubPtr2, dubPtr3, fltPtr1, chrPtr1, and chrPtr2 so that they
  //   can be used to point to the  appropriate variables.  Assign the
  //   address of the appropriate variable to them and print their
  //   values.  (The char pointers will have to be coerced as before
  //   for printing).

  //  Write your code here:
	
  int * intPtr1 = &int1;
  int * intPtr2 = &int2;
  int * intPtr3 = &int3;
  double * dubPtr1 = &dub1;
  double * dubPtr2 = &dub2;
  double * dubPtr3 = &dub3;
  float * fltPtr1 = &flt1;
  char * chrPtr1 = &chr1;
  char * chrPtr2 = &chr2;

cout << "The value of int1 is " << intPtr1 <<endl;
cout << "The value of int2 is " << intPtr2 <<endl;
cout << "The value of int3 is " << intPtr3 <<endl;

cout << "The value of dub1 is " << dubPtr1 <<endl;
cout << "The value of dub2 is " << dubPtr2 <<endl;
cout << "The value of dub3 is " << dubPtr3 <<endl;

cout << "The value of f1t1 is " << fltPtr1 <<endl;

cout << "The value of chr1 is " << chrPtr1 <<endl;
cout << "The value of chr2 is " << chrPtr2 <<endl;
  

  
  cout << "-----------------------------------------" << endl << endl;

  //  Report your results here:
  // 
  //   Pointer  Printed
  //  Variable   Value
  //   intPtr1      0x7ffee9b7e818
  //   intPtr2      0x7ffee9b7e814
  //   intPtr3      0x7ffee9b7e810
  //   dubPtr1      0x7ffee9b7e808
  //   dubPtr2      0x7ffee9b7e800
  //   dubPtr3      0x7ffee9b7e7f8
  //   fltPtr1      0x7ffee9b7e7f4
  //   chrPtr1      a
  //   chrPtr2      ba 

  // How do the values of the pointers compare to the values of the
  // addresses you got in the previous experiment?

  // The values are the same as the addresses.
  //
  //
  //

  //////////////////////////////////////////////////////////////////	
  //  3. Experiments with NULL pointers and with dereferencing
  //////////////////////////////////////////////////////////////////	
  //   A. Assign NULL to fltPtr1, then print the value of fltPtr1.
  //   B. Accessing the storage locations through the relevant
  //   pointers, assign the following values and print them.
  //       int1  12
  //       int2  22
  //       dub1  10.1
  //       dub2  20.2
  //       flt1  30.3

  // Write your code here:

fltPtr1 = NULL;

cout << "The value of f1t1 is " << fltPtr1 <<endl;

int1 = 12;
int2 = 22;
dub1 = 10.1;
dub2 = 20.2;
flt1 = 30.3;

cout << "The value of int1 is " << int1 <<endl;
cout << "The value of int2 is " << int2 <<endl;

cout << "The value of dub1 is " << dub1 <<endl;
cout << "The value of dub2 is " << dub2 <<endl;

cout << "The value of f1t1 is " << flt1 <<endl;

  // Your program should have terminated with a run-time error.
  // What error was reported?
  //
  // 
  //
  // Why did it occur?
  //
  // 

  //   C.  Fix the problem and repeat.

  // Write your code here:


  cout << "-----------------------------------------" << endl << endl;

  //////////////////////////////////////////////////////////////////	
  //  4. Experiments with pointer arithmetic
  //////////////////////////////////////////////////////////////////	
  //    A.  Print the values of intPtr2, (intPtr2+1) and
  //    (intPtr2-1). Did you get what you expected? 

  // Write your code here:
	
cout << "The value of intPtr2 is " << intPtr2 <<endl;
cout << "The value of intPtr2 is " << (intPtr2+1) <<endl;
cout << "The value of intPtr2 is " << (intPtr2-1) <<endl;
  // Write your explanation here:
  //Yes, it printed the addresses of what is pointing to intPtr2.
  //
  //
  //
  //
  //


  //   B. Print the value of intPtr1.
  //   C. Use the increment operator to increment intPtr1. 
  //   D. Print the value of intPtr1 again.  
  //   E. Print the value of the memory location pointed to by
  //   intPtr1.  Explain what is happening.
	
  // Write your code here:
  cout << "The value of intPtr1 is " << intPtr1 <<endl;
  cout << "The value of intPtr1 is " << ++intPtr1 <<endl;
  cout << "The value of intPtr1 is " << &intPtr1 <<endl;

  // Write your explanation here.
  //At first it just prints the value of the pointer,
  // next i printed the value of the pointer incremented 
  //and after i printed the value of the memory location.

  cout << "-----------------------------------------" << endl << endl;


  //////////////////////////////////////////////////////////////////	
  //  5. Experiments with dynamic allocation
  //////////////////////////////////////////////////////////////////	
  //   A.  Use the new operator to dynamically allocate an integer.
  //   B.  Assign the number 6000 to the new location.
  //   C.  Print the address of this new location.
  //   D.  Print the value stored in the new location.
  //   E.  Comment on the address of the new location compared to the
  //   addresses seen in part 2.

  //  Write your code here:
int *int4 = new int;
*int4 = 6000;
cout << "The address of int4 is " << int4 <<endl;
cout << "The value of int4 is " << *int4 <<endl;


  
  //  Write your results and comments here:
  //  
  //  new location address = 0x7f9bd9c05870
  //  contents of new location = 6000

  //  Comment:
  //  The new address is very different numbers.

  //  F.  Use the new operator to allocate an array of size 10 of
  //  doubles.  Fill the array with 10.0,20.0,...100.0 and print the array.

  // Write your code here:
double *dubArr = new double[10];

for(int i = 0; i < 10; i++){
  dubArr[i] = 10.0 *(i+1);
}

for(int i = 0; i < 10; i++){
  cout << "The dubArr at " << i << " is " << dubArr[i] << endl;
}

  return 0;
}
// Bubble sort in C++

#include <iostream>
using namespace std;

// perform bubble sort
void bubbleSort(int array[], int size) {

  // loop to access each array element
  for (int step = 0; step < (size-1); ++step) {
      
    // loop to compare array elements
    for (int i = 0; i < size - (step-1); ++i) {

      // compare two adjacent elements
      // change > to < to sort in descending order
      if (array[i] > array[i + 1]) {

        // swapping elements if elements
        // are not in the intended order
        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
      }
    }
  }
}

// print array
void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    cout << "  " << array[i];
  }
  cout << "\n";
}

int main() {
  double start = double(clock()) / CLOCKS_PER_SEC;
  const int SIZE = 500000;
  int data[SIZE];
  
  for(int i = 0; i < SIZE; i++){
      int random = (rand() % SIZE);
      data[i] = random;  
  }
  // find array's length
  int size = sizeof(data) / sizeof(data[0]);
  
  bubbleSort(data, size);
  
  cout << "Sorted Array in Ascending Order:\n";  
  printArray(data, size);
  double finish = double(clock()) / CLOCKS_PER_SEC;

double elapsed = finish - start;
cout << "elapsed time: " << elapsed << endl;
}
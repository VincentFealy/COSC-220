#include <iostream>
using namespace std;

void findAverage(int arr[][10],int rows,float arr1[])
{
    for(int i=0;i<rows;i++)
    {
        int sum=0;
        for(int j=0;j<10;j++)
{
sum=sum+arr[i][j];
}
arr1[i]=(float)sum/10;
}
cout<<"Average of rows : ";
for(int i=0;i<rows;i++)
{
cout<<arr1[i]<<" ";
}
}
int main()
{
int rows=4;
int arr[4][10]={{1,2,3,4,5,6,7,8,9,10},
{11,12,13,14,15,16,17,18,19,20},
{21,22,23,24,25,26,27,28,29,30},
{31,32,33,34,35,36,37,38,39,40}};

float arr1[rows];
findAverage(arr,rows,arr1);
return 0;
}

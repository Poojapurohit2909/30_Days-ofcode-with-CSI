/*
Implement bubble sort algorithm to sort an array.
*/
#include<iostream>
using namespace std;
int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i =0; i<size-1; i++)
    {
          for(int j = 0; j<size-i-1; j++)
          {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j], arr[j+1]);
            }
          }
    }
    for(int i =0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
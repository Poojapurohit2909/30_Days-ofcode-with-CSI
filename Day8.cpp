/*Write a program to reverse an array. */
#include<iostream>
using namespace std;
int main()
{
    int arr[] = {2, 4, 6, 4};
    int size = sizeof(arr)/sizeof(arr[0]);
    int s =0;
    int e = size-1;
     while(s<=e)
     {
        swap(arr[s], arr[e]);
        s++;
        e--;
     }
     cout<<"Reversed array: ";
     for(int i =0; i<size; i++)
     {
        cout<<arr[i]<<" ";
     }
    return 0;
}
/*Write a program that prints all the elements in array. */
#include<iostream>
using namespace std;
int main()
{
    int arr[] = {2, 4, 6, 8};
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i =0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
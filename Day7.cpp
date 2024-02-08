/*Write a program to print the sum of all elements in an arrsy.*/
#include<iostream>
using namespace std;
int main()
{
    int arr[] = {2, 4, 6, 4};
    int sum = 0;
    int size = sizeof(arr)/sizeof(arr[0]);

    for(int i =0; i<size; i++)
        sum = sum + arr[i];
    
    cout<<"Sum: "<<sum;
    return 0;
}
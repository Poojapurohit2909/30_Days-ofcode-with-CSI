/* Implement a program that prints first 10 numbers of the fibonacci sequenece*/
#include<iostream>
using namespace std;
int main()
{
    int first = 0;
    int second = 1;
    cout<<"First 10 fibonacci numbers: ";
    cout<<first<<" "<<second<<" ";
    for(int i = 0; i<8; i++)
    {
        int current = first + second;
         cout<<current<<" ";
         first = second;
         second = current;
    }
    return 0;
}
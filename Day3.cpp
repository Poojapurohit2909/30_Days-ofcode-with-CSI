#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    if(num%2==0)
        cout<<"Number entered is EVEN.";
    else 
        cout<<"Number entered is ODD.";
    return 0;
}
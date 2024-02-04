#include<iostream>
using namespace std;
int fact(int n)
{
     int ans = 1;
    if(n==0 || n==1)
    {
        return ans;
    }
    while(n!=0)
    {
        ans = ans*n;
        n--;
    }
    return ans;
}
int main()
{
    int n = 0;
    cout<<"Factorial of 5: "<<fact(n);
    return 0;
}
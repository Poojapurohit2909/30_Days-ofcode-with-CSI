/* Implement linear search algorithm to find the element in an array.
*/
#include<iostream>
using namespace std;
int main()
{
    int arr[] = {2, 4, 6, 4};
    int k = 6;
     int size = sizeof(arr)/sizeof(arr[0]);
     int ans =-1;
    for(int i =0; i<size; i++)
    {
        if(arr[i]==k)
        {
            ans = i;
            break;
        }       
    }
    if(ans == -1)
        cout<<k<<" is not prsent.";
    else 
     cout<<k<<" is present at "<<ans<<" index. ";
    return 0;
}
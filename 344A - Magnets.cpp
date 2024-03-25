#include <iostream>
#include <string>
#include <algorithm>
 
using namespace std;
 
int main()
{
    int count=0, n;
    cin>>n;
    int arr[n];
    for(int i=1; i<=n; i++)
    {
        cin>>arr[i];
        
        if(arr[i]!=arr[i-1])
        count++;
    }
    cout<<count;
    return 0;
}
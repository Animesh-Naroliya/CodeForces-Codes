#include <iostream>
#include <string>
#include <algorithm>
 
using namespace std;
 
int main()
{
    int n, h, count =0;
    cin>>n>>h;
    int arr[n];
    for(int i=0; i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<n; i++)
    {
        h>=arr[i]?count++:count+=2;
        // cout<<i+1<<"-->"<<count<<endl;
    }
    
    cout<<count;
    return 0;
}
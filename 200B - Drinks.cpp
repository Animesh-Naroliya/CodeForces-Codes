#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
 
using namespace std;
 
int main()
{
    int n;
    float sum=0;
    cin>>n;
    
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    cout<<sum/n;
    return 0;
}
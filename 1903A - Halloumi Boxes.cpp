#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, k, n;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        if(is_sorted(arr, arr+n) || k > 1)
        {
            cout<<"YES"<<endl;
        }
        else 
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
#include <map>
typedef long long int lli;
using namespace std;
 
void code()
{
    lli a, cnt = 0;
    cin >> a;
    map<lli, lli> mp;
    lli arr[a+1]; 
    for(lli i=1; i<=a; i++)
    {
        cin>>arr[i];
        mp[arr[i]]++;
    }
    sort(arr+1, arr+a+1);
    for(lli i=(a+1)/2; i<=a; i++)
    {
        if(arr[i] == arr[(a+1)/2])
            cnt++;
            else break;
    }
    cout<<cnt<<endl;
}
 
int main()
{
    int t=1;
    cin>>t;
    while(t--)
    {
        code();
    }
    return 0;
}
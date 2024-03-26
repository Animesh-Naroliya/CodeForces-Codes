#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, a, b, c;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        if(a==b && a!=c) cout<<c<<endl;
        else if( b==c && b!= a) cout<<a<<endl;
        else cout<<b<<endl;
    }
    return 0;
}
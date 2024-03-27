#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, a, b, m;
    cin>>n;
    while(n--)
    {
        cin>>a>>b>>m;
        cout<<(m+a)/a + (m+b)/b<<endl;
    }
    return 0;
}
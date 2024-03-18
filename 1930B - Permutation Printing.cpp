#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    long long int n, t, new_n, i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<int> vect(n,-1);
        new_n = n;
        for(i=1; i<n; i+=2)
        {
            vect[i] = new_n;
            new_n--;
        }
        for(i=0; i<n;i+=2)
        {
            vect[i] = new_n;
            new_n--;
        }
        for(i=0; i<n; i++)
        {
            cout<<vect[i]<< " ";
        }
        cout<<endl;
    }
    return 0;
}
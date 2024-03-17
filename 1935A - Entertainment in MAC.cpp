#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int t, n;
    string s, ns; 
    cin>>t;

    while(t--)
    {
        cin>>n;
        cin>>s;
        ns = s;
        reverse(ns.begin(), ns.end());
        cout<<min(s, ns+s)<<endl;
        
    }
}

#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        if (n == 1 || n % 2 != 0)
            cout << "NO" << endl;
        else if (n == 2)
            cout << "YES\n"
                 << "AA" << endl;
        else
        {
            cout<<"YES"<<endl;
            string ans= "";
            for(int i=0; i<n/2; i++)
            {
                ans+="ABB";
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}
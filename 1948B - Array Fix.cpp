#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using ll = long long;
// typedef vector<long long> vll;

using namespace std;


void solve()
{
    ll n;
    cin >> n;
    vector <long long > v(n);
    for (auto &i : v)
        cin >> i;
    ll curr = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] < curr)
        {
            cout << "NO" << endl;
            return;
        }
        else
        {
            ll x = v[i] / 10;
            ll y = v[i] % 10;
            if (x >= curr)
            {
                if (y >= x)
                {
                    curr = y;
                }
                else
                {
                    curr= v[i];
                }
            }
            else
            {
                curr = v[i];
            }
        }
    }
    cout<<"YES"<<endl;

}

int main()
{   
    ll t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}
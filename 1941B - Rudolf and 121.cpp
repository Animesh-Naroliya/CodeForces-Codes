#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for(auto &i:arr) cin>>i;
    for (int i = 1; i < n - 1; i++)
    {
        if (arr[i] == 0)
            continue;
        else if (arr[i - 1]*2 > arr[i])
        {
            cout << "NO" << endl;
            return;
        }
        else
        {
            arr[i] -= (2 * arr[i - 1]);
            arr[i + 1] -= arr[i - 1];
            arr[i - 1] = 0;
        }
    }
    for (auto &i : arr)
    {
        if (i != 0)
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}

int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
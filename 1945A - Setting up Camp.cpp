#include <iostream>
#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    long long a, b, c, t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> a >> b >> c;
        long long ans = a;
        ans += b / 3;
        b %= 3;
        if (b % 3 > 0 && 3 - b > c)
        {
            cout << -1 << endl;
            continue;
        }
        if (b > 0)
        {
            ans++;
            c -= 3 - b;
        }
        b = 0;
 
        ans += (c+2)/3;
        cout<<ans<<endl;
    }
    return 0;
}

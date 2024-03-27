#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int count = 0;
    int pre = 0;

    for (int i = 1; n >= pre + i; ++i)
    {
        count++;
        n -= pre + i;
        pre = pre + i;
    }

    cout << count << endl;
    return 0;
}

#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#define Max_Size 1000000000
using namespace std;

int main()
{
    int t, n;
    cin >> t;
    long long int sum = 0;
    while (t--)
    {
        cin >> n;
        long long int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        for (int i = 1; i < n; i++)
        {
            sum += arr[i] - arr[i - 1];
        }
        cout << sum << endl;
        sum = 0;
    }
    return 0;
}

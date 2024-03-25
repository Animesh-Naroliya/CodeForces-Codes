#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    if (n < 0)
        return 0;
    for (int i = 0; i < k; i++)
    {
        if (n % 10 == 0)
            n = n / 10;
        else
            n -= 1;
    }
    cout << n;
    return 0;
}
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    long long int n, a, b;
    cin >> n;

    while (n--)
    {
        cin >> a >> b;
        int div = 0, pls = 0;
        if (a % b == 0)
        {
            cout << 0 << endl;
            continue;
        }
        div = a / b;
        pls = (div + 1) * b;
        cout << pls - a << endl;
    }
    return 0;
}
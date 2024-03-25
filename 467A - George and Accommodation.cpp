#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int p, q, n, count = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> p >> q;
        if (p != q && abs(p - q) >= 2)
        {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
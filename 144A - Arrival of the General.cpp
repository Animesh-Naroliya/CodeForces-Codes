#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c, nb, nc;
        cin >> a >> b >> c;
        nb = b/3;

        if(b == 1 && c == 1)
        {
            cout<< -1 <<endl;
            continue;
        }
        if (b == 0)
        {
            cout << a + (c + 2) / 3 << endl;
            continue;
        }
        if (b % 3 == 0)
        {
            cout << a + b / 3 + (c + 2) / 3 << endl;
            continue;
        }

        int remaining = b % 3;
        if (remaining <= c)
        {
            cout << a + b / 3 + (b % 3 + c + 2) / 3 << endl;
            continue;
        }

        cout << -1 << endl;
    }

    return 0;
}

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    long long int n, p, q;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> p >> q;
        cout << ((p - q) > 1 ? "YES" : "NO") << endl;
    }
    return 0;
}
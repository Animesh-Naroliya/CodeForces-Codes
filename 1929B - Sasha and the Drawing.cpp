#include <iostream>
using namespace std;

int main()
{
    long t;
    cin >> t;
    while (t--)
    {
        long n, k;
        cin >> n >> k;
        long ans = 2 * n;
        if (k <= 4 * n - 4)
        {
            ans = (k + 1) / 2;
        }
        else if (k <= 4 * n - 3)
        {
            ans = 2 * n - 1;
        }
        cout << ans << endl;
    }
    return 0;
}

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, count = 0, cnt[100], k = 0;
        char x;
        cin >> n;
        {
            for (int i = 0; i < n; i++)
            {
                count = 0;
                for (int j = 0; j < n; j++)
                {
                    cin >> x;
                    if (x == '1')
                    {
                        count++;
                    }
                }
                if (count != 0)
                {
                    cnt[k] = count;
                    k++;
                }
            }
        }
        if (cnt[0] == cnt[1])
        {
            cout << "SQUARE" << endl;         
        }
        else
        {
            cout << "TRIANGLE" << endl;
        }
    }
    return 0;
}
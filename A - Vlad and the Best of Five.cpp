#include<iostream>
#include <string>
using namespace std;

int main()
{
    int t, size;
    string s;
    cin >> t;
    while (t--)
    {
        int A = 0, B = 0;
        cin >> s;
        for (int i = 0; i < 5; i++)
        {
            if (s[i] == 'A')
                ++A;
            else
                ++B;
        }
        cout << ((A > B) ? "A\n" : "B\n");
    }
    return 0;
}
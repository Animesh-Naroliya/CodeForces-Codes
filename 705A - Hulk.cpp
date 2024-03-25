#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string s = "I hate ";
    int i = 2;
    if (n == 1)
    {
        s += "it";
    }
    else
    {
        while (i <= n)
        {
            s += (i % 2 == 0 ? "that I love " : "that I hate ");
            if (i == n)
            {
                s += "it";
            }
            i++;
        }
    }

    cout << s << endl;

    return 0;
}
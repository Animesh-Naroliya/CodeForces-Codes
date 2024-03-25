#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> roundNumbers;
        int multiplier = 1;
        while (n > 0)
        {
            int digit = n % 10;
            if (digit != 0)
            {
                roundNumbers.push_back(digit * multiplier);
            }
            n /= 10;
            multiplier *= 10;
        }

        cout << roundNumbers.size() << endl;
        for (int i = 0; i < roundNumbers.size(); ++i)
        {
            cout << roundNumbers[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
#include <iostream>
#include <string>
#include <algorithm>
 
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    string s;
    for(int i = 0; i < n; i++)
    {
        cin >> s;
        transform(s.begin(), s.end(), s.begin(), ::toupper);
        cout << (s == "YES" ? "YES" : "NO") << endl;
    }
    return 0;
}
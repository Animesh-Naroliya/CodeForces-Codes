#include <iostream>
#include <algorithm>
using namespace std;
 
int main() {
    int x, count = 0;
    cin >> x;
 
    for (int i = 1; i <= x; i++) {
        if (__gcd(x, i) == 1) {
            count++;
        }
    }
 
    cout << count << endl;
    return 0;
}
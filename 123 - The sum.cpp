#include <iostream>
 
using namespace std;
 
int main() {
    int K;
    cin >> K;
 
    long long fib1 = 1, fib2 = 1;
    long long sum = 0;
 
    for (int i = 1; i <= K; ++i) {
        sum += fib1;
        long long nextFib = fib1 + fib2;
        fib1 = fib2;
        fib2 = nextFib;
    }
 
    cout << sum << endl;
 
    return 0;
}
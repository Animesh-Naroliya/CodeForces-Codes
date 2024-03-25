#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
 
using namespace std;
 
int main()
{
    long long n, even, odd, sum_even=0, sum_odd= 0, sum=0;
    
    cin>>n;
    
    even = n/2;
    sum_even = even*(even+1);
    odd = n%2 == 0?n/2: (n/2 + 1);
    sum_odd = odd*odd;
    sum = sum_even - sum_odd;
    cout<<sum;
    return 0;
}
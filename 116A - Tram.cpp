#include <iostream>
#include <string>
#include <algorithm>
 
using namespace std;
 
int main()
{
    int n,a, b, total=0, max=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a; 
        cin>>b;
        total -= a;
        total += b;
        
        max = total>max ? total:max;
    }
    cout<<max;
    return 0;
}
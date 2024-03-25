#include <iostream>
#include <string>
#include <algorithm>
 
using namespace std;
 
int main()
{
    int a, b, c, d, year;
    cin>>year;
    while(true)
    {
        year++;
        a = year/1000;
        b = year/100%10;
        c = year/10%10;
        d = year%10;
        
        if(a!=b && b!=c && c!= d && 
           a!=c && b!=d && a!=d) break;
    }
    cout<<year;
    return 0;
}
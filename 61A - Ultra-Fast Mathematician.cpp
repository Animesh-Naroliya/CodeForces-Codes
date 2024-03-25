#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
 
using namespace std;
 
int main()
{
    string bit1, bit2;
    cin>>bit1;
    cin>>bit2;
    int Max = max(bit1.size(), bit2.size()); 
    for(int i=0; i<Max; i++)
    {
        if(bit1[i]=='1'&& bit2[i] == '1' || bit1[i] == '0' && bit2[i] == '0')
            cout<<'0';
        else
            cout<<'1';
    }
    
    return 0;
}
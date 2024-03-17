#include <iostream>
#include <fstream>
#include <cmath>
#include <string>
#include <iomanip>
#include <ctime>
#include <cstring>
#include <cstdio>
#include <sstream>
#include <iomanip>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, move1=0, move2=0, count=0; 
    string s;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        cin>>s;
        for(int j=0; j<s.size(); j++)
        {
            if(s[j] == '(') move1++;
            if(s[j] == '[') move2++;
            if(s[j] == ']' && move2>0) 
            {
                move2--;
                count++;
            }
            if(s[j] == ')'&& move1>0)
            {
                move1--;
                count++;
            }

        }
        cout<<count<<endl;
        count = 0 ;
        move1 = 0; move2=0;
    }
    return 0;
}
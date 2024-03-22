#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{   int x, y, count =0;
    cin>>x>>y;
    for(int i=0; i<x; i++)
    {
        if(i%2 == 0)
        {
            cout<<string(y, '#')<<endl;
        }
        else
        {
            if(count%2 == 0)
            {
                cout<<string(y-1, '.')<<"#"<<endl;
                count++;
            }
            else 
            {
                cout<<"#"<<string(y-1, '.')<<endl;
                count++;
            }
        }
    }
    return 0;
}
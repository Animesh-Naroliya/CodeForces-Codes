#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int teams;
    cin>>teams;
    int host=0, guest=0, count =0;
    vector<pair<int, int> > colors;
    for(int i=0; i<teams; i++)
    {
        cin>>host>>guest;
        colors.push_back(pair<int, int> (host, guest));
    }
    for(int a=0; a<teams; a++)
    {
        for(int b=a+1; b<teams; b++)
        {
            if(colors[a].first == colors[b].second)
            {
                count++;
            }
            if(colors[b].first == colors[a].second)
            {
                count++;
            }
        }
    }
    cout<<count<<endl;
    return 0;
}
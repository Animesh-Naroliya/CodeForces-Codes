#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{   
    int n, count = 0;
    cin>>n;
    string s;
    char ch[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    
    cin>>s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    if(n<26) 
    {
        cout<<"NO"<<endl;
        return 0;
    }
    else
    {
        for(int i=0; i<s.size(); i++)
        {
            for(int j=0; j<26; j++)
            {
                if(ch[j] == s[i])
                {
                    ch[j] = 0;
                    count++;
                }
            }
        }
        if(count == 26) cout<<"YES"<<endl;
        else cout<<"NO";
        return 0;
    }
}
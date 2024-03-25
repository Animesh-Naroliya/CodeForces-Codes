#include<iostream>
#include<string>
#include<algorithm>
 
using namespace std;
 
int main()
{
    string s;
    cin>>s;
    int low=0,high=0;
    for(int i=0; i<s.size();i++)
    {
        if(s[i]>=97)
            low++;
        else
            high++;
    }
    if(low>=high)
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    else
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    cout<<s;
    return 0;
}
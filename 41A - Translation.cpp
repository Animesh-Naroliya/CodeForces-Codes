#include <iostream>
#include <string>
#include <algorithm>
 
using namespace std;
 
int main()
{
    string s1, s2; 
    cin>>s1; 
    cin>>s2;
    int count=0;
    int size=s1.size();
    int size2 = s2.size();
    // cout<<size<<endl;
    if(size2 != size)
    {
        cout<<"NO";
        return 0;
    }
    for(int i=0; i<size; i++)
    {
        if(s1[size-i-1] == s2[i])
        {
            count++;
        }
    }
    
    // cout<<count<<endl;
    (count == size)?cout<<"YES":cout<<"NO";
    return 0;
}
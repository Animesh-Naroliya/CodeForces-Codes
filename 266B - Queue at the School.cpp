#include <iostream>
#include <string>
 
using namespace std;
 
int main()
{
    string s;
    int t, n;
    cin>>n>>t>>s;
    
    while(t--)
    {
        for(int i=1;i<n;i++)
        {
            if(s[i]=='G' && s[i-1] == 'B')
            {
                s[i] = 'B';
                s[i-1] = 'G';
                i++;
            }
        }
    }
    cout<<s<<endl;
    return 0;
}
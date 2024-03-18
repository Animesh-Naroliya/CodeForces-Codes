#include <iostream>
using namespace std;
int main()
{
    int t, n, count=0;
    string s;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        cin>>s;
        for(int j=0; j<n; j++)
        {
            if(s[j] == 'm' && s[j+1]=='a' && s[j+2] == 'p')
            {
                count++;
                j+=2;
            }
            else if(s[j] == 'p' && s[j+1]=='i' && s[j+2] == 'e')
            {
                count++;
                j+=2;
            }
        }
        cout<<count<<endl;
        count=0;
    }
    return 0;
}



// God: Serengeti
#include<iostream>
using namespace std;

int main()
{
    int t, n, k;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        cin >> n >> k;  
        int is = n * (n - 1) / 2;
        int answer;
        if(k == n-1) answer = 1;
        else if(n <= k) 
            answer = 1;
        else if(n > k + 1) 
            answer = n;
        else if(k % is == 0) 
            answer = n;
        cout << answer << endl;
    }
    return 0;
}



////////// Using recursion //////////
#include <iostream>
using namespace std;

int island(int n, int k)
{
    if (k == n - 1)
        return 1;
    else if (n <= k)
        return 1;
    else if (n > k + 1)
        return n;
    else if (k % (n * (n - 1) / 2) == 0)
        return n;
    else
        return island(n, k - 1);
}

int main()
{
    int t, n, k;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n >> k;
        cout << island(n, k) << endl;
    }
    return 0;
}

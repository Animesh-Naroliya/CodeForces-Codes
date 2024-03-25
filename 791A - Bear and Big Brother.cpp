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
#include <unordered_set>
 
using namespace std;
 
int main()
{
    int bob, limak, count = 0;
    cin >> bob >> limak;
 
    while (bob <= limak)
    {
        count++;
        bob *= 3;
        limak *= 2;
    }
    cout<<count<<endl;
    return 0;
}
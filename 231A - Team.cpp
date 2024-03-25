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
    int Petya, Vasya, Tonya, number = 0;
    int cases; 
    cin>>cases;
    for(int i=0; i<cases; i++)
    {
        cin>>Petya>>Vasya>>Tonya;
        
        if(Petya+Vasya+Tonya >= 2)
        {
            number++;
        }
 
    }
    cout<< number <<endl;
    return 0;
}
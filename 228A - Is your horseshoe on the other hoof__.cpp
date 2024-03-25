#include <iostream>
#include <algorithm>
using namespace std;
 
int main() {
    long long int size = 4;
    long long int arr[size], count = 0; 
 
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    
    sort(arr, arr+size);
 
    for(int i = 1; i <= size; i++) {
        if(arr[i] == arr[i - 1]) {
            count++;
        }
    }
    cout << count << endl;
 
    return 0;
}
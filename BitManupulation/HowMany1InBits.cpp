#include <iostream>

using namespace std;

// This function Counts 1's in a bit accepttion 2s powers like, 8 or 16
int numberOfOne(int n){
     int count = 0;
    while (n)
    {
        n = n & (n-1);
        count ++;
    }
    return count;
    
}
int main() {

int n;
    cin >> n;
    cout << numberOfOne(n) << endl;
    
    return 0;
}
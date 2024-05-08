#include <iostream>
// In this program we have to find the summetion of only 2 diffrent divisibles value togather
using namespace std;
int divisiable(int n, int a, int b){

    int C1 = n/a;
    int C2 = n/b;
    int C3 = n/(a*b);

    return C1 + C2 - C3;
}
int main() {

int a, b, n;

cout<<"Enter n, a, b : ";
cin>>n>>a>>b;

cout<<divisiable(n,a,b);
    
    return 0;
}
#include <iostream>

using namespace std;
int gcd(int a, int b){

    while (b != 0)
    {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}
int main() {

  int a,b;
  cin>> a>>b;
  // first input alwyas be grater
  if(a>b){
        cout<<gcd(a,b);
    }
    else{
        cout<<gcd(b,a);
    }
    return 0;
}
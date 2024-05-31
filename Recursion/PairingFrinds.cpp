#include <iostream>

using namespace std;

int PairingFrinds(int n){

    if (n==0 || n==1 || n==2)
    {
       return n;
    }

    return PairingFrinds(n-1) + PairingFrinds(n-2)*(n-1);
    
}
int main() {

    cout<< PairingFrinds(4);
    return 0;
}
#include <iostream>

using namespace std;
int isPowerOf2(int n){
    return (n && !(n & n-1));
}
int main() {
cout<<"Enter the value to cheack the power of 2: ";
int m;
cin>>m;
bool cheack = isPowerOf2(m);
if (cheack)
{
    cout<<"This is the power of 2"<<endl;
}
else
{
    cout<<"This not the power of 2"<<endl;
}


    
    return 0;
}
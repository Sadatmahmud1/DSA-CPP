#include <iostream>

using namespace std;

int  sum(int n){
if (n==0)
{
    return 0;
}

    return n + sum(n-1);


}
int main() {

int n;
    cin>>n;
    cout<<sum(n);
    
    return 0;
}

/*
How its work
sum(4) = 4 + sum(3)
       = 4 + (3 + sum(2))
       = 4 + (3 + (2 + sum(1)))
       = 4 + (3 + (2 + (1 + sum(0))))
       = 4 + (3 + (2 + (1 + 0)))
       = 4 + (3 + (2 + 1))
       = 4 + (3 + 3)
       = 4 + 6
       = 10
*/
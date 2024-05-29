#include <iostream>

using namespace std;

int taillingWays(int n){
    if (n==0)
    {
        return 0;
    }
    if (n==1)
    {
        return 1;
    }
    return taillingWays(n-1)+taillingWays(n-2);
}
int main() {

    cout<<taillingWays(4);
    return 0;
}

//How this recursion works

// taillingWays(4)
//   = taillingWays(3) + taillingWays(2)
//   = (taillingWays(2) + taillingWays(1)) + (taillingWays(1) + taillingWays(0))
//   = ((taillingWays(1) + taillingWays(0)) + 1) + (1 + 0)
//   = ((1 + 0) + 1) + (1 + 0)
//   = (1 + 1) + 1
//   = 2 + 1
//   = 3

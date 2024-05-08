#include <iostream>

using namespace std;
int inc(int n){
    if (n == 0)
    {
        return 0;
    }
    inc(n-1);
    cout<<n<<endl;
}
int main() {

    int n;
    cin>>n;
    cout<<inc(n);
    return 0;
}
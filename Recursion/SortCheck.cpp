#include <iostream>

using namespace std;
int sorted(int arr[], int n){

    if (n == 1)
    {
        return true;
    }
    bool  restArray = sorted(arr+1, n-1);
    return (arr[0]<arr[1]&& restArray);
}
int main() {

int arr[8] ={1,2,3,4,5,6,7,8};
cout<<sorted(arr,8)<<endl;
    
    return 0;
}
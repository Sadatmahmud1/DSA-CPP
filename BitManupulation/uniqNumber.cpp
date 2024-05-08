#include <iostream>

using namespace std;
int UniqueNum(int arr[], int n){
    int xorSum = 0;

    // It performs xor operation on all the elements of the array and Evantually it will return the unique element
    // the unique valu or non duble valu , its a property of xor operation 
    //if wanna cheack the perform operation one by one on each elements 
    for (int i = 0; i < n; i++)
    {
        xorSum = xorSum ^ arr[i];
    }
    return xorSum;
}
int main() {

    int arr[7] = {2,1,1,2,3,4,3};
    cout<<UniqueNum(arr,7);
    return 0;
}
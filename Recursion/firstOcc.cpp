#include <iostream>

using namespace std;
int firstocc(int arr[], int n, int i, int key){
    if (i == n)
    {
        return -1;
    }
    
    if (arr[i] == key)
    {
        return i;
    }
    return firstocc(arr,n,i+1,key);
}
int main() {

int arr[] = {1,2,3,1,2,3};

cout<<"First occourance in position "<<firstocc(arr,6,0,3);

    
    return 0;
}
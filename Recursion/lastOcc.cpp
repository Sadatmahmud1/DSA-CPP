#include <iostream>

using namespace std;
int lastocc(int arr[], int n, int i, int key){
    // its storing the itration in a stack meamory and recall it from last call or reverse manner
    // if key found or some thing matches its equals to -1
    if (i == n) {
        return -1;
    }
    int ReastArray = lastocc(arr,n,i+1,key);
    if (ReastArray!= -1)
    {
        return ReastArray;
    }
    
    if (arr[i] == key)
    {
        return i;
    }
    return -1;
}
int main() {

int arr[] = {1,2,3,1,2,3};

cout<<"last occourance in position "<<lastocc(arr,6,0,2);

    
    return 0;
}
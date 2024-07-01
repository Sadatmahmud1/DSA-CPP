#include <iostream>

using namespace std;

void countShort(int arr[], int n){
    int k = arr[0];
    for (int i = 0; i < n; i++)
    {
       k = max(k,arr[i]);
    }
    
    int count[10] = {0};

    // it traversing arr[i] and getting i'th element. 
    // i'th elements become the count i'th positioin
    // and we add  or incremeant 1 to i'th element
    for (int i = 0; i < n; i++){
        count[arr[i]] = count[arr[i]] + 1;
    }
    // it traversing count[i] and getting i'th element.
    // we are adding two corsponding elements current and previews one
    for (int i = 1; i <= k; i++)
    {
       count[i]+= count[i-1];
    }
    
    int output[n];

    for (int i = n-1; i >= 0; i--)
    {
        // accesing the valu of arr[i'th index = i'th element] = index of count[i'th element = i'th index]
        // then decreasing the count index and point the index as output arrays index and also  placed arr[i'th element]
        output[--count[arr[i]]] = arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        // then copy output arry to arr[i];
        arr[i] = output[i];
    }
    

}

int main() {

    int arr[]={1,3,2,3,4,1,6,4,3};
    
    countShort(arr,9);

    for(int i = 0; i<9;i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}
/*


*/
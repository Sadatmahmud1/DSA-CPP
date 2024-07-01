#include <iostream>
int swap(int* arr,int low,int high){
      
    int temp = arr[low];
    arr[low] = arr[high];
    arr[high] = temp;
}

void DNFsort(int arr[], int n){
    int low = 0;
    int mid = 0;
    int high = n-1;

    while (mid<= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr,low, mid);
            mid++, low++;

        }
        else if(arr[mid] == 1)
        {
            mid++;  
        }
        else
        {
            swap(arr,mid,high);
            high--;
        }
        
    }
    
}
using namespace std;

int main() {

    int arr[]={1,0,2,0,0,2,1,0,2};
    DNFsort(arr,10);
    for(int i = 0; i<9;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
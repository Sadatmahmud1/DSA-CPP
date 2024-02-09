#include <iostream>
using namespace std;

int main()
{
    //Declearing number of arry elements and taking input as array elements
    int n;
    int arr[n];
    cin>>n;

    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    // Insertion(arr,n);

     for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i-1;
        while(j>key && j>= 0){
                arr[j+1] = arr[j];
                j--;
        }

        arr[j+1] = key;
    }
    return 0;
}
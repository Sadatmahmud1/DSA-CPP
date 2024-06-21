#include <iostream>

using namespace std;

void merge(int arr[], int l, int mid, int r){
    int n1 = mid - l +1;
    int n2 = r - mid;

    int* a = new int[n1];
    int* b = new int[n2]; // temp arrays

    for (int i = 0; i < n1; i++)
    {
       a[i] = arr[l+i];
    }

    for (int i = 0; i < n2; i++)
    {
        b[i] = arr[mid + 1 + i];
    }
    
    int i = 0;
    int j = 0;
    int k = l;

    while (i<n1 && j<n2)
    {
        if (a[i] < b[j])
        {
           arr[k]= a[i];
           k++, i++;
        }
        else
        {
            arr[k] = b[j];
            k++, j++;
        }
        
        
    }
    
    while (i<n1)
    {
         arr[k]= a[i];
           k++, i++;
    }

    while (i<n2)
    {
         arr[k]= b[j];
           k++, j++;
    }


    
        delete [] a;
        delete [] b;
    
}

void MargeShort(int arr[], int left, int right){

if(left<right){
    int mid = (left+right)/2;
    MargeShort(arr, left, mid);
    MargeShort(arr, mid+1, right);
    merge(arr, left, mid, right);
}

}

int main() {
   
   int arr[] = {4,2,8,1,9,3,0,2,5};
   int n = sizeof(arr)/sizeof(arr[0]);
   MargeShort(arr,0,n-1);

   for (int i = 0; i < n; i++)
   {
    cout<<arr[i];
    cout<<endl;
   }
   
   
    
    return 0;
}
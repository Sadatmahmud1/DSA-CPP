#include <iostream>
using namespace std;


int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin>>n;

    // Create an array with given size
    int arr[n];

    // Fill the array using loop
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    // Sorting algorithm implementation
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(arr[i] > arr[j]){
             int temp = arr[j];
             arr[j] = arr[i];
             arr[i] = temp;
            }
           
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
    return 0;
}
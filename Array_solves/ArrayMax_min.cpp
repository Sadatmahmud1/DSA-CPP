#include <iostream>
#include <climits>
using namespace std;

int main()
{
     int n;
     int minNum = INT_MAX;
     int maxNum = INT_MIN;
    cout << "Enter the number of elements: ";
    cin>>n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cout<<"Enter Next  Element: ";
        cin>>arr[i];
    }

     //for finding out the Maximum number
    //  for (int i = 0; i < n; i++)
    //  {
    //     if (arr[i]> maxNum)
    //     {
    //         maxNum = arr[i];
    //     }
    //     if (arr[i]< minNum)
    //     {
    //         minNum = arr[i];
    //     }    
     for (int i = 0; i < n; i++)
     {
        maxNum = max(maxNum,arr[i]);
        minNum = min(minNum,arr[i]);
        
     }
     
     cout<<maxNum<<" "<<minNum<<endl;



    return 0;
}
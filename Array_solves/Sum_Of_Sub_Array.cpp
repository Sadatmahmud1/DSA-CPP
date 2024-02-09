#include <iostream>
using namespace std;

int main()
{
    int n;
   cout<<" GIVE SOME INPUT:"<<endl;
    cin>>n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];


    }
           int sum = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            cout<<sum<<endl;
        }
    }
          cout<<sum<<endl;
      
    return 0;
}
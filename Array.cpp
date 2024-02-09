#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cout << "Enter the number of elements: ";
    cin>>n;
    int arr[n];

    for (int i = 0; i <= n; i++)
    {
        cout<<"Enter Next  Element: ";
        cin>>arr[i];
    }
    for (int i = 0; i <= n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}


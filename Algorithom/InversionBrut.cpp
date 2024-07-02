#include <iostream>

using namespace std;

void inversion(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
                count++;
        }
    }

    cout<<count;
}

int main()
{

    int arr[] = {3,5,6,9,1,2,7,8};

    int n = sizeof(arr) / sizeof(arr[0]);

    inversion(arr, n);

    // for (int i = 0; i < 9; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    return 0;
}
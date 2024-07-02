#include <iostream>

using namespace std;

long long merge(int arr[],  int l, int mid, int r)
{
    long long count = 0;
    int n1 = mid - l + 1;
    int n2 = r - mid;

    int L[n1], R[n2];

    //copying data to a temporary array
    for (int i = 0; i < n1; i++)
    {
        L[i] = arr[l + i];
    }
    //copying data to a temporary array
    for (int j = 0; j < n2; j++)
    {
        R[j] = arr[mid + 1 + j];
    }

    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {   // if j > i then it will count inversion
            arr[k] = R[j];
            count += (n1-i);
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
    return count;
}

long long mergeshort(int arr[], int l, int r)
{
    long long count = 0;

    if (l < r)
    {
        int mid = (l + r) / 2;
        count += mergeshort(arr, l, mid);
        count += mergeshort(arr, mid + 1, r);
        count += merge(arr, l, mid, r);
    }

    return count;
}

int main()
{

    
    int arr[] = {3,5,6,9,1,2,7,8};

    int n = sizeof(arr) / sizeof(arr[0]);


 long long inversion =   mergeshort(arr,0,n-1);

        cout<<"Inversion : " <<inversion;

    return 0;
}
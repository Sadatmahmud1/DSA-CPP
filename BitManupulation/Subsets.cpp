#include <iostream>

using namespace std;

void subsets(int arr[], int n)
{

// by performing a left shift operation on 1 or (1 << n) 
// Example if n = 0001; then  1 << 3 = 1000 which is equals of 16 or 2^n
// we can setting range of rows and subsets of the given array
// 
    for (int i = 0; i < (1 << n); i++)
    {
        //  This loop is used to print the subsets of the given array on every row 
        // with each row with a diffrent combination of subsets of the given array
        for (int j = 0; j < n; j++)
        {
            //  This condition is used to 
            //chaack and print the subsets of the given array on every row
           

            // this condition creates subsets by performing and operation with i and 1<<j
            // if i & (1 << j) is true then it means that the jth bit of i is set
            // so we can print the jth element of the given array and this itration will continue
            // untill the max combination of jth bit in a row
            if (i & (1 << j))
            {
                cout << arr[j];
            }
        }
        cout << endl;
    }
}
int main()
{

    int arr[4] = {1, 2, 3, 4};
    subsets(arr, 4);

    return 0;
}
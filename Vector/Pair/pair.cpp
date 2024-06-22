#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool myCompare(pair<int, int> p1, pair<int, int> p2)
{

    // this comparison returns true or false
    //  then the main sort function  sort elements according to it
    return p1.first < p2.first;
}
int main()
{

    int arr[] = {10, 7, 13, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    // creating pair
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        v.push_back(make_pair(arr[i], i));
    }

    // sort is sorted based on myCompare Function
    sort(v.begin(), v.end(), myCompare);

    /*
    
    Iteration 0 (i = 0):
    v[0] = (1, 4) → v[0].second = 4
    arr[v[0].second] = arr[4] = 0 (Assign the sorted index 0 to the original position 4)
    Updated arr: [10, 7, 13, 9, 0, 5]

    */
    for (int i = 0; i < v.size(); i++)
    {
        arr[v[i].second] = i;
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}
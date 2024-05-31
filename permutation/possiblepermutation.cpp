#include <iostream>
#include "bits/stdc++.h"

using namespace std;
vector<vector<int>>ans;
void permute(vector<int> &a, int idx){
    if(idx == a.size()){
        // pushes all the genareted sub array in to ans and make it a 2d array
        ans.push_back(a);
        return;
    }
    for(int i = idx; i < a.size(); i++){
    swap(a[i], a[idx]);
    //create suba array by using recursive calls 
    permute(a, idx + 1);
    //restore original position (because we changed in original array to create sub arrays)
    // Every time we create a new permutation then we need to restore or backtrack the original form of array.
    swap(a[i], a[idx]);
    }
   
}
int32_t main() {
    int n;
    cin>>n;
    vector<int> a(n);
    
    // Range-based for loop: for(auto &i : a)

// This is a C++11 feature that allows you to iterate over all elements
//  in a container (in this case, the vector a).
// auto &i means that i is a reference to each element in the vector a.
//  Using a reference avoids copying each element and allows direct modification.
    for(auto &i : a)
    cin>>i;
    permute(a,0);
    //since its a 2d array (ans) so that we used a nested for loop to print all the elements
    // for this nested loop first loop is a outer loop v is the permutation in ans 
    //and i is itrating each element of v (permutation)
    for(auto v: ans){
        for(auto i : v)
        cout<<i<<" ";
        cout<<"\n";
    }
    return 0;
}
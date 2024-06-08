#include <iostream>
#include "bits/stdc++.h"

using namespace std;

void helper(vector<int> a, vector<vector<int>> &ans, int idx){
    if(idx == a.size()){
        ans.push_back(a);
        return;
    }
    for (int i = idx; i<a.size();i++){
        // at last once it will run
        // for first itration idx will lock the  first index number
        // then i will itrate inside nestade itration idx(0) to a.size()
        // after every upper loop itration the value of idx will incrase by +1
        // and it will lock the index for nested loop 
        // the recursion will continue and every time it will chck if the idx and ith index are matched
        //except idx != i or (first itration in same index)
        if(i != idx and a[i] == a[idx])
        continue;
        swap(a[i],a[idx]);
        helper(a,ans,idx+1);
    }
}

vector<vector<int>> permute(vector<int>nums){
    sort(nums.begin(),nums.end());
     vector<vector<int>>ans;
     helper(nums,ans,0);
     return ans;
}

int32_t main() {
    int n;
    cin>>n;
    vector<int> a(n);
    // Range-based for loop: for(auto &i : a
    for(auto &i : a)
    cin>>i;

vector<vector<int>> res = permute(a);
    for(auto v: res){
        for(auto i : v)
        cout<<i<<" ";
        cout<<"\n";
    }
    return 0;
}
#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main() {

    vector<int> vctr;

    vctr.push_back(1);
    vctr.push_back(8);
    vctr.push_back(3);
    vctr.push_back(7);
    vctr.push_back(5);

    for (int i = 0; i < vctr.size(); i++)
    {
        cout<<vctr[i]<<endl;
    }

    vector<int>::iterator it;

    for (it = vctr.begin(); it!= vctr.end(); it++)
    {
        cout<<*it<<" ";
    }
    
        vctr.pop_back();

    for (auto elements:vctr)
    {
        cout<< elements<<endl;
    }

    vector<int> v(6,30);
     
    for(auto elements:v){
        cout<<elements<<" ";
    }
    

    swap(vctr,v);
     
    sort(v.begin(),v.end());

    for(auto elements:v){
        cout<<elements<<" ";
    }
    
    pair <int, char> p;

    p.first = 500;
    p.second = *"s";

  cout<< get<0>(p)<<endl;
  cout<< get<1>(p)<<endl;



    return 0;
}
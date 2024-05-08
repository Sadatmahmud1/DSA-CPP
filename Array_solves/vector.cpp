#include <iostream>
#include <vector>
using namespace std;
int main()
{
  vector<int>v;
  v.push_back(1);
  v.push_back(13);
  v.push_back(14);
  for (int i = 1; i < v.size(); i++)
  {
   cout<<v[i]<<endl;
  }

  vector<int>:: iterator  it;

  for (it = v.begin();it!= v.end(); it++)
  {
    cout<<*it<<endl;
  }
  
  for (auto element:v)
  {
    cout<<element<<endl;
  }

  vector<int> v2(3,70);
 swap(v,v2);

  for (auto element:v)
  
  {
    cout<<element<<endl;
  }
    for (auto element:v2)
  {
    cout<<element<<endl;
  }
  
    return 0;
}

//This program will move all the identical elements of the string at the last 
// condition is there should be only one strings identical

#include <iostream>

using namespace std;
string moveAllast(string s){
     if(s.length()==0){
        return "";
    }

    // in every itration ch holds a charecter
    char ch= s[0];
    // ans holds the string after removing the first element and second become first
    string ans = moveAllast(s.substr(1));
    // At the time of calling recursion ans[0'th element] string of the last itration cheack by the last ch
    // if the ch and X does not match then it will return ans+ch
    if(ch=='x'){
        return ans+ch;
    }
   
   // if the ch and X does not match then it will return ans+ch
   return ch+ans;
    
}
int main() {

     cout<<moveAllast("sxxadxxxaxxtx");
    return 0;
}
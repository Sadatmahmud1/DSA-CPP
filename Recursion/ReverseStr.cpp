#include <iostream>

using namespace std;
void reverse(string s){
    if(s.length()==0){
        return;
    }
    // this line substracts 1 charcter in every itration 
    // after itration done as the Rulse Of Recursion it call its operation from reverse
    string ros=s.substr(1);
    // this line is responsible for itration
    reverse(ros);
    //when recursion calling back from last this line prints first charecter from 0th index
    cout<<s[0];
}
int main() {

string s = "Sadat";
 reverse(s);
     
    return 0;
}
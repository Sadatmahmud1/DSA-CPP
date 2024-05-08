#include <iostream>
// This program Remove dublicates form strings
//This program will work if only dubbles or multiples are sequential
using namespace std;
string RemoveDup(string s){
    if(s.length()==0){
        return "";
    }

    // in every itration ch holds a charecter
    char ch=s[0];
    // ans holds the string after removing the first element and second become first
    string ans=RemoveDup(s.substr(1));
    // At the time of calling recursion ans[0'th element] string of the last itration cheack by the last ch
    // if the ch and ans matches its return only ans because it is duble
    if(ch==ans[0]){
        return ans;
    }
    // if the ch and ans does not match then it will return ch+ans
    return (ch+ans);
}
int main() {

    cout<<RemoveDup("saddaatttt");
    return 0;
}
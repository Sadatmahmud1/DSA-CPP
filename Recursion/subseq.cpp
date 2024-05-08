//This program will print all the sub sets of given string parameter string and and empty string

#include <iostream>

using namespace std;
void subseq(string s, string ans){
    if (s.length()==0)
    {
     cout<<ans<<endl;
       return ;
    }
    char ch = s[0];
    string ros = s.substr(1);
    subseq(ros,ans);
    subseq(ros,ans+ch);
    
}
int main() {

    string str = "abc";
    subseq(str,"");
    return 0;
}
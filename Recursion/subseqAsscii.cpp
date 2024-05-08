// This code will  be making subsets of a string and also with the number of ASCII Code


#include <iostream>

using namespace std;
void subseq(string s, string ans){
    if (s.length()==0)
    {
     cout<<ans<<endl;
       return ;
    }
    char ch = s[0];
    int code = ch;
    string ros = s.substr(1);
    subseq(ros,ans); // Exclude the current character
    subseq(ros,ans+ch);  // Include the current character as it is
    subseq(ros,ans+to_string(code)); // Include the ASCII code of the current character
    
}
int main() {

    string str = "ABC";
    subseq(str,"");
    return 0;
}
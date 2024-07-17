#include <iostream>
#include <stack>
using namespace std;

    void reverseSentence(string s){
        stack<string> st;
        string word;
        for(int i=0;i<s.length();i++){
            while (s[i] != ' ' && i<s.length())
            {
                word+= s[i];
                i++;

            }
            if(!word.empty()){
                st.push(word);
                word ="";
            }

            
        }
        while (!st.empty())
        {
            cout<<st.top()<<" ";
            st.pop();
        }cout<<endl;
        
    }
int main() {

   string s = "Hey How are you";
   reverseSentence(s);
    
    return 0;
}

/*  Original Sentence: "Hey How are you"
how its working-

Stack Operations:
Push "Hey"  → ["Hey"]
Push "How"  → ["Hey", "How"]
Push "are"  → ["Hey", "How", "are"]
Push "you"  → ["Hey", "How", "are", "you"]

Reverse Sentence by popping stack:
Pop "you"  → Print "you"
Pop "are"  → Print "are"
Pop "How"  → Print "How"
Pop "Hey"  → Print "Hey"

Output: "you are How Hey"
*/
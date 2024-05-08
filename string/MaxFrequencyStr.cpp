#include <iostream>

using namespace std;

int main() {

    string s ="a supper powerful pokemon trainer posses a spiritual power";
    
    int frequency[26];
// initialiging every index of the frequency charecter with 26
    for (int i = 0; i < 26; i++)
    {
        frequency[i] = 0;
    }

    for (int i = 0; i < s.length(); i++)
    {       
            // by substracting from 'a' we get the index of the charecter
            // because a = 97 in ascii table and b is 98 so b-a = 1
            // if we want to get the index of the charecter we can use s[i]-'a'
            // s[i]-'a' will give the frequency[i= ith index from 26 index]  of the charecter
            //previously frequency[i]'s every index was initialized with 0
            frequency[s[i]-'a']++;
    }
    
    char ans = 'a';
    int maxF = 0;
    for (int i = 0; i < 26; i++)
    {
        // if the frequency of the charecter is greater than the max frequency then we counts
        if (frequency[i] > maxF)
        {
            maxF = frequency[i];
            // by addig with a  we get the charecter
            ans = i + 'a';
        }
    }
    cout<<maxF<<" "<<ans<<endl;
    

    return 0;
}
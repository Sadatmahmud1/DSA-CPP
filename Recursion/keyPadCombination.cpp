#include <iostream>
#include <string>

using namespace std;

string keypadArr[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqr", "stu", "vwx", "yz"};

void keypad(string s, string ans) {
    if (s.length() == 0) {
        cout << ans << endl;
        return;
    }
    
    char ch = s[0];
    if (ch < '0' || ch > '9') {
        // If the character is not a digit, ignore it and proceed with the rest of the string
        keypad(s.substr(1), ans);
        return;
    }
    
    int index = ch - '0';
    string code = keypadArr[index];
    string ros = s.substr(1);
    for (int i = 0; i < code.length(); i++) {
        keypad(ros, ans + code[i]);
    }
}

int main() {
    keypad("23", "");
    return 0;
}

/*
Initially, we call keypad("23", "").
s = "23" (input string)
ans = "" (empty string)
We're trying to find all possible combinations of characters that can be formed using the characters mapped to the digits '2' and '3' on a telephone keypad.
In the keypad function:
s[0] is '2'.
index = 2 - '0' = 2.
code = keypadArr[2] = "abc".
ros = s.substr(1) = "3".
We're considering the possible characters corresponding to the digit '2', which are 'a', 'b', and 'c'.
Now, we iterate over each character in code:
For character 'a':
We call keypad("3", ans + 'a').
s = "3"
ans = "a"
For character 'b':
We call keypad("3", ans + 'b').
s = "3"
ans = "b"
For character 'c':
We call keypad("3", ans + 'c').
s = "3"
ans = "c"
At this point, we've considered all combinations for the digit '2'. We've added 'a', 'b', and 'c' to the ans string, and we're ready to move to the next digit.
Now, we consider the digit '3':
s[0] is '3'.
index = 3 - '0' = 3.
code = keypadArr[3] = "def".
ros = s.substr(1) = "".
We're considering the possible characters corresponding to the digit '3', which are 'd', 'e', and 'f'.
Now, we iterate over each character in code:
For character 'd':
We call keypad("", ans + 'd').
s = ""
ans = "ad"
For character 'e':
We call keypad("", ans + 'e').
s = ""
ans = "ae"
For character 'f':
We call keypad("", ans + 'f').
s = ""
ans = "af"
At this point, we've considered all combinations for the digit '3'.
The recursion stops as s becomes empty. We print the combination found:
"ad"
"ae"
"af"
"bd"
"be"
"bf"
"cd"
"ce"
"cf"
These are all the possible combinations of characters that can be formed using the digits '2' and '3' on a telephone keypad.

*/
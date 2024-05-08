#include <iostream>

using namespace std;

int main() {
// string declearation type 1
    string str = "sadat";

     cout<<str<< endl;
// string declearation type 2
    string  str2(5,'M');
    cout<<str2 <<endl;

// string declearation type 3
    string str3;
    getline(cin, str3);
    cout<<str3 <<endl;

    return 0;
}
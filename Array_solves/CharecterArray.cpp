#include <iostream>

using namespace std;

int main() {

    int i = 0;
    char a[100] = "apple";

    while (a[i] != '\0')
    {
        cout<<a[i]<<endl;
        i++;
    }
    return 0;
}
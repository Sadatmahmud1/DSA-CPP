#include <iostream>

using namespace std;

// call by value
    void incremeant(int a){

    a++;

    }

    
// call by refrance by using pointers
    void swap(int *c, int *d)
    {
        int temp = *c;
        *c = *d;
         *d = temp;
    }
int main() {

    int a = 10;
    int c = 100,d= 29;
    incremeant(a);

    swap(c,d);
    cout<< c <<" "<<d << endl;
    cout << a << endl;
    return 0;
}
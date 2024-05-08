// The tower of hanoi
#include <iostream>

using namespace std;
//second itration positon of B and C change through this line
// in the strarting of second recursions second itration charecter Inter change again
void towrOfHanoi(int n, char scr, char dest, char helper){
    if(n==0){
        return;
    }
    // First itration it prints as it is
    towrOfHanoi(n-1, scr, helper, dest);
    cout<<"Move From "<<scr<<" to "<< dest<<endl;
    //after first recursion second one starts charecter Inter change again
     towrOfHanoi(n-1,  helper, dest,scr);
}
int main() {

    towrOfHanoi(3, 'A', 'C', 'B');
    return 0;
}
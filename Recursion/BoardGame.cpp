// This program is a Boat games path finder 

#include <iostream>

using namespace std;

int countPath(int s, int e){
    if(s==e){
        return 1;
    }
    if(s>=e){
        return 0;
    }
    int count = 0;
    //every time countPath starts itration it starts from over
    for (int i = 1; i <= 6; i++)
    {
        count += countPath(s+i,e);
    }
    return count;
    
}
int main() {

cout<<countPath(0,5)<<endl;
    
    return 0;
}
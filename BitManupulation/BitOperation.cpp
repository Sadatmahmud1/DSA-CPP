#include <iostream>
#include <bitset>
using namespace std;
 //Getting the bit of any particular position
int getBit(int n, int pos){
    return ((n & (1<<pos))!=0);
}

//Setting the bit at any particular position
int setBit(int n, int pos){
    return (n | (1<<pos));
}

//Clearing the bits at any particular position
int clearBit(int n, int pos){
   int mask = ~(1<<pos);
   return (n & mask);
}

//Updating the bits at any particular position
int updateBit(int n, int pos, int val){
    int mask = ~(1<<pos);
    n = (n & mask);
    return (n | (val<<pos));
}
int main() {
    //Getting the bit of any particular position opetatable number----(13,3)---- the position
    int Result =  getBit(13,3);

     bitset<sizeof(int)> bits(Result);
    cout << Result <<'\n'<< bits <<endl;


       //Setting the bits at any particular position opetatable number----(5,1)---- the position
    Result = setBit(5,1);
 
     bitset<sizeof(int)> bits1(Result);
    cout << Result <<'\n'<< bits1 <<endl;

    //Clearing the bits at any particular position
    
    Result = clearBit(5,1);
 
     bitset<sizeof(int)> bits2(Result);
    cout << Result <<'\n'<< bits2 <<endl;


//Updating the bits at any particular position operatabe value ---5, position --1,1----updating bit with 1 or 0
    Result = updateBit(5,1,1);
 
     bitset<sizeof(int)> bits3(Result);
    cout << Result <<'\n'<< bits3 <<endl;

   
    return 0;
}
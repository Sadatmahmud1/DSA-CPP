#include <iostream>

using namespace std;
int setBit(int n, int BitPosition){
    return ((n & (1<<BitPosition))!=0);
}
void uniqNums(int arr[], int n){
    int xorSum = 0;
    //We have to traverse to the array and perform xor operation to find unique number
    for (int i = 0; i < n; i++)
    {
       xorSum = xorSum^arr[i];
    }
// after find the unique number we have to store this
// because in this unique number, unlike prevewise one there is two numbers
// and now we will decoade it 
    int tempXorSum = xorSum;

    // for that we have to find the right most bit or right most 1
    // for the position of bit and start the next operation
    int findBit = 0;
    int BitPosition = 0;
    //
    while (findBit != 1)
    {
        // we are trying to perform and operation to find the rightmost bit or 1
        // if it is, the we will get 1 and the loop will get terminated
        findBit = xorSum & 1;

        //We will count the position of the bit where we perform and operation with 1 or 0001
        // aftter checking the first position whe will right shift xorSum at 1th position
        BitPosition++;
        xorSum = xorSum >>1;

    }

    int newXor = 0;
    // this loop trverse the elements of the array onceagain
    for (int i = 0; i < n; i++)
    {
        // this logic check the unique number by passing the ith element and the The Bit position 
        //what we have just found in findBit
        // when set bit function found the unique number it returns 1
        // then it perform xor operation to confirm and store it is the one of unique value 
        if (setBit(arr[i],BitPosition-1))
        {
           newXor = newXor^arr[i];
        }
        
    }
    
    cout<<newXor<<endl;

    // We used first unique numberfor perform with newXor value to get last unique value
    cout<<(tempXorSum^newXor)<<endl;
    
}
int main() {

    int arr[] = {2,1,3,4,2,1,3,8};
    uniqNums(arr,8);
    return 0;
}
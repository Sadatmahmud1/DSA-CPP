#include <iostream>

using namespace std;
bool getBit(int n, int pos){
    return ((n & (1<<pos))!=0);
}

int setBit(int n, int pos ){

    return ( n |( 1<<pos));
}

int uniqueNum(int arr[], int n){
      int result = 0;
    //this loop is setting the bits position on jth position
    // j is 0 to 64 it represeants the bits like 1000000 = 64
    for (int i = 0; i < 64; i++)
    {
        int sum = 0;
        // this loop is traversing the elements
        for (int j = 0; j < n; j++)
        {
            //this logic is confirming the rightmost bits position if it is then the condition will true
            //the the sum will b incremeant
            if (getBit(arr[j],i))
            {
               sum++;
            }
            
        }
        if (sum%3!= 0)
        {
            //Basically result is contain 0000 and we perform or operation with 1<<i 
            // which Evantually gives the 1<<i right most bits number
            // so it returns unique valu and asign into the result  
            result = setBit(result,i);
        }
        
        
    }
  //  then we evantually Return the value
    return result;
}
int main() {
    int arr[] = {1,2,3,4,1,2,3,1,2,3};


cout<<uniqueNum(arr,10)<<endl;
    
    return 0;
}
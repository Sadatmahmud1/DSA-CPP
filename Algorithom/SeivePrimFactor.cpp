#include <iostream>

using namespace std;
// we will the prime factor of n
// and thats why we are taking n as the input
void PrimFactort(int n){
    //we will create an empty arry with 100 range and initialized with 0
    int spf[100] = {0};
    // we will run a loop from 2 to n for traversing 
    for (int i = 2; i <= n; i++)
    {
        // we will assign ith valu to the ith position of spf array
       spf[i]= i;
    }

    // we will run a loop from 2 to n for traversing again
    for (int i = 2; i <= n; i++)
    {
        // we will check if the ith value of spf array is equal to i
        if (spf[i]==i){
            // this loop starts with i*i and itrate untill n
            // it's itrate untill every multiple is rplaced by its prime numbers
        
            for (int j = i*i; j <= n; j+=i)
            {
                // it compares the element with the value of j or the multiple's of prime number
                // then it replaces it with the prime number 
                // in every itration j being cheacked if it is replaced or not by comparing with spf[j]  
               if (spf[j]== j)
               {
                spf[j] = i;
               }
               
            }
            
        }
    }
    // untill now we calculatated the smallest prime factor of thi number


// now we will print all the  prime factor of the number from smallest to highest
// If we keep deviding the numbers with smallest prime factors then we will get others until 1
    while (n != 1)
    {
    // n is devided by n'th element of spf[n]
       cout<<spf[n]<<" ";
       n = n/spf[n];
    }
    
    
}
int main() {

int n;
cin>>n;
PrimFactort(n);
    
    return 0;
}
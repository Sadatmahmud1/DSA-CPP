#include <iostream>

using namespace std;
void primeSieve(int n)
{
    // in sieve algorithm we declare an array and mark every elements with 0
    // by doing this by defult we are making all of the elements as prime [it's a rule we can]
    int prime[100] = {0};

// We are traversing the array up to n
    for (int i = 2; i <= n; i++)
    {
        // if the element is not marked as prime then we are marking it as prime 
        //by implimenting this logic
        if (prime[i] == 0)
        {
            for (int j = i * i; j <= n; j += i)
            {
                prime[j] = 1;
            }
        }
    }
// After marking every number as not prime we impliment this logic to call out prime numbers
    for (int i = 2; i <= n; i++)
    {
       if (prime[i]== 0)
       {
        cout<<i<<" "<<endl;
       }
       
    }
    
}
int main()
{

    int n;
    cin >> n;
    primeSieve(n);
    return 0;
}
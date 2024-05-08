#include <iostream>

using namespace std;

int main()
{
    int length = 3;
    int array[length];
    for (int i = 0; i < length; i++)
    {
        cin >> array[i];
    }

    int target = 0;
    cin >> target;
      for (int i = 0; i < length; i++)
    {
       if (array[i] == target)
    {
         cout << array[i] << " The target founded" << endl;
    }
    }
    
    
  
    return 0;
}

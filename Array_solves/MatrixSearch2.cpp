#include <iostream>

using namespace std;

int main() {
       cout<<"Enter Dimention"<<endl;
    int n,m,target; cin>>n>>m;
    cout<<"Enter the target element"<<endl;
     cin>>target;
    int a[n][m];

    cout<<"Enter Elements: ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>a[i][j];
        }
        
    }

    bool found = false;

    int row = 0,col = m-1;
   
      
       while(row < n and col>=0 )
        {
              if (a[row][col] == target)
        {
           found = true;
        }

        if (a[row][col]> target)
        {
            row++;
        }
        else
        {
            col--;
        }

        }

        if (found)
        {
            cout<<"The targetated element found";
        }
        else
        {
            cout<<"The targetated element not found";
        }
         return 0;
    }
   

#include <iostream>

using namespace std;

int main() {
     int n =3, m =3;
    int Matrix[n][m] ={{1,2,3},{3,4,5},{6,7,8}};
   cout<<"original Matrix"<<endl;

   // Output of Original Matrix
    for (int i = 0; i < n ; i++)
    {
        
    for (int j = 0; j < m ; j++)
    {
       cout << Matrix[i][j] << " ";
        
    }
    cout<<endl;
    }



// Swapping is Starting from here
    for (int i = 0; i < n ; i++)
    {
        
    for (int j = 0; j < m ; j++)
    {
        int Temp = Matrix[i][j];
        Matrix[i][j] = Matrix[j][i];
        // Matrix[j][i] = Temp;
        
    }
    }

// swapped matrix output
 cout<<"Swapped Matrix Output"<<endl;
    for (int i = 0; i < n ; i++)
    {
        
    for (int j = 0; j < m ; j++)
    {
       cout << Matrix[i][j] << " ";
        
    }
    cout<<endl;
    }

    
    return 0;
}
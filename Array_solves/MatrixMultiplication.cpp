#include <iostream>

using namespace std;

int main()
{

    int n = 3, m = 2, k = 4;
    int Matrix1[n][m] = {{1, 2}, {3, 4}, {6, 7}};
    int Matrix2[m][k] = {{1, 2, 3}, {3, 4, 5}, {3, 4, 5}, {3, 4, 5}};

    int ans[n][k];

    // Initialize ans matrix to 0
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            ans[i][j] = 0;
        }
    }

    // Perform matrix multiplication
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            for (int z = 0; z < m; z++)
            {
                ans[i][j] += Matrix1[i][z] * Matrix2[z][j];
            }
        }
    }

    // Print the result matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

#include <iostream>

using namespace std;

// Function to check if a queen can be placed at position (x, y)
bool isSafe(int **arr, int x, int y, int n)
{
    // Check the column
    for (int row = 0; row < x; row++)
    {
        if (arr[row][y] == 1)
        {
            return false;
        }
    }

    // Check the upper-left diagonal
    int row = x;
    int col = y;
    while (row >= 0 && col >= 0)
    {
        if (arr[row][col] == 1)
        {
            return false;
        }
        row--;
        col--;
    }

    // Check the upper-right diagonal
    row = x;
    col = y;
    while (row >= 0 && col < n)
    {
        if (arr[row][col] == 1)
        {
            return false;
        }
        row--;
        col++;
    }

    return true;
}

// Function to solve the N-Queens problem using backtracking
bool nQueen(int **arr, int x, int n)
{
    if (x >= n)
    {
        return true;
    }

    for (int col = 0; col < n; col++)
    {
        if (isSafe(arr, x, col, n))
        {
            arr[x][col] = 1;

            // Proceed to place the next queen
            if (nQueen(arr, x + 1, n))
            {
                return true;
            }

            // Backtrack if placing queen in current position doesn't lead to a solution
            arr[x][col] = 0;
        }
    }
    return false;
}

int main()
{
    int n;
    cin >> n;

    // Dynamically allocate a 2D array
    int **arr = new int*[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = 0;
        }
    }

    // Solve the N-Queens problem and print the solution
    if (nQueen(arr, 0, n))
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }
    else
    {
        cout << "No solution exists" << endl;
    }

    // Free allocated memory
    for (int i = 0; i < n; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}

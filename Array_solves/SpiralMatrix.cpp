#include <iostream>

using namespace std;

int main()
{
    int n = 5;
    int m = 5;
    int array[n][m];
    cout << "Enter Input for Array:" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> array[i][j];
        }
    }

    int RowStart = 0, ColumnStart = 0;
    int RowEnd = n - 1, ColumnEnd = m - 1;

    while (RowStart <= RowEnd && ColumnStart <= ColumnEnd)
    {
        for (int Column = ColumnStart; Column <= ColumnEnd; Column++)
        {
            cout << array[RowStart][Column]<<endl;
        }
        RowStart++;

        for (int Row = RowStart; Row <= RowEnd; Row++)
        {
            cout << array[Row][ColumnEnd]<<endl;
        }
        ColumnEnd--;

        for (int Column = ColumnEnd; Column >= ColumnStart; Column--)
        {
            cout << array[RowEnd][Column]<<endl;
        }
        RowEnd--;

        for (int Row = RowEnd; Row >= RowStart; Row--)
        {
            cout << array[Row][ColumnStart]<<endl;
        }
        ColumnStart++;
    }
}

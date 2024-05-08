#include <iostream>

using namespace std;

int main()
{
    int length = 3;
    int hight = 3;
    bool flage = false;
    int array[length][hight];
    cout << "Enter Input for Array:" << endl;
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < hight; j++)
        {
            cin >> array[i][j];
        }
    }
    cout << "select the target" << endl;
    int target = 0;
    cin >> target;
    for (int i = 0; i < length; i++)
    {

        for (int j = 0; j < hight; j++)
        {
            if (array[i][j] == target)
            {
                cout << "Cordinate " << i + 1 << " " << j + 1 << endl;
                flage = true;
            }
        }
    }
    if (flage)
    {
        cout << " The target founded" << endl;
    }
    else
    {
        cout << "The target not founded" << endl;
    }

    return 0;
}

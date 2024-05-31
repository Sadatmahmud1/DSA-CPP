#include <iostream>

using namespace std;

int kanpsack(int value[], int wt[], int n, int w)
{
    if (n == 0 || w == 0)
    {
        return 0;
    }
    if (wt[n - 1] > w)
    {
        return kanpsack(value, wt, n - 1, w);
    }
    return max(kanpsack(value, wt, n - 1, w - wt[n - 1]) + value[n - 1], kanpsack(value, wt, n - 1, w));
}
int main()
{
    int wt[] = {10, 20, 30};
    int value[] = {100, 50, 150};
    int w = 50;
    cout << kanpsack(value, wt, 3, w);

    return 0;
}
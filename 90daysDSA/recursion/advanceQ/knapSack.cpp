#include <iostream>
using namespace std;
int knapsack(int val[], int wt[], int n, int w)
{
    if (n == 0 || w == 0)
    {
        return 0;
    }
    if (wt[n - 1] > w)
    {
        return knapsack(val, wt, n - 1, w);
    }
    return max(knapsack(val, wt, n - 1, w - wt[n - 1]) + val[n - 1], knapsack(val, wt, n - 1, w));
}
int main()
{
    int val[] = {100, 50, 150};
    int wt[] = {10, 20, 30};

    cout << knapsack(val, wt, 3, 50) << endl;
}
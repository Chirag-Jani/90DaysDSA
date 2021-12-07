#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    // int a[7] = {1, 5, 3, 4, 3, 5, 6};
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // best approach (KADANE'S ALGORITHM)
    int currentSum = 0, maxSum = INT32_MIN;

    for (int i = 0; i < n; i++)
    {
        currentSum += a[i];
        if (currentSum < 0)
        {
            currentSum = 0;
        }

        maxSum = max(maxSum, currentSum);
    }
    cout << maxSum;

    // bruteforce and optimised

    // int currSum[n + 1];
    // currSum[0] = 0;

    // for (int i = 1; i <= n; i++)
    // {
    //     currSum[i] = currSum[i - 1] + a[i - 1];
    // }

    // int maxSum = INT32_MIN;
    // for (int i = 0; i <= n; i++)
    // {
    //     int sum = 0;
    //     for (int j = 0; j < i; j++)
    //     {
    //         sum = currSum[i] - currSum[j];
    //         maxSum = max(sum, maxSum);
    //     }
    // }

    // cout << maxSum;
}
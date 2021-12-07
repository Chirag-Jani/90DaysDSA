#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int kadane(int arr[], int n)
{
    int cSum = 0, mx = INT32_MIN;
    for (int i = 0; i < n; i++)
    {
        cSum += arr[i];
        if (cSum < 0)
        {
            cSum = 0;
        }
        mx = max(mx, cSum);
    }

    return mx;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    //
    int wrapSum, nonwrapSum;
    nonwrapSum = kadane(a, n);

    int totalsum = 0;

    for (int i = 0; i < n; i++)
    {
        totalsum += a[i];
        a[i] *= -1;
    }
    wrapSum = totalsum + kadane(a, n);

    cout << max(wrapSum, nonwrapSum) << endl;
}
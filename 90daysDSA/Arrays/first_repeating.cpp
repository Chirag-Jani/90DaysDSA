// not getting output - i don't know why :/
#include <bits/stdc++.h>
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

    const int N = 1e6;
    int idx[N];
    for (int i = 0; i < N; i++)
    {
        idx[i] = -1;
    }

    int minIndex = INT32_MAX;

    for (int i = 0; i < n; i++)
    {
        if (idx[a[i]] != -1)
        {
            minIndex = min(minIndex, idx[a[i]]);
        }
        else
        {
            idx[a[i]] = i;
        }
    }

    if (minIndex == INT32_MAX)
    {
        cout << "-1" << endl;
    }
    else
    {
        cout << minIndex + 1 << endl;
    }
}
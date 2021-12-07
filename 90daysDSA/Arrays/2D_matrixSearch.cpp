#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, n;
    cin >> m >> n;
    int a[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    int target;
    cin >> target;
    bool found = 0;

    //  bruteforce approach
    // for (int i = 0; i < m; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         if (a[i][j] == target)
    //         {
    //             found = true;
    //         }
    //     }
    // }

    // optimised approach

    int r = 0, c = n - 1;
    while (r < m && c >= 0)
    {
        if (a[r][c] == target)
        {
            found = true;
        }
        a[r][c] > target ? c-- : r++;
    }

    //  to print
    if (found)
    {
        cout << "found";
    }
    else
    {
        cout << "not found";
    }

    return 0;
}
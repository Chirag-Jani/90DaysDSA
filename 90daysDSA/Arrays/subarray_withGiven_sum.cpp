#include <bits/stdc++.h>
using namespace std;
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
    int target;
    cin >> target;

    int st = -1, en = -1, currSum = 0, i = 0, j = 0;

    while (j < n && currSum + a[j] <= target)
    {
        currSum += a[j];
        j++;
    }

    if (currSum == target)
    {
        cout << i + 1 << " " << j;
        return 0;
    }

    while (j < n)
    {
        currSum += a[j];
        while (currSum > target)
        {
            currSum -= a[i];
            i++;
        }
        if (currSum == target)
        {
            st = i + 1;
            en = j + 1;
            break;
        }
        j++;
    }
    cout << i + 1 << " " << j + 1;
    return 0;
}
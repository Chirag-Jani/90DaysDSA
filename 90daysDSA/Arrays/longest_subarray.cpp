#include <iostream>
using namespace std;
int main()
{
    // int n;
    // cin >> n;
    // int a[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> a[i];
    // }
    int a[7] = {10, 7, 4, 6, 8, 10, 11};
    int diff = a[1] - a[0], curLen = 0, maxLen = 0;

    for (int i = 1; i < 8; i++)
    {
        if ((a[i] - a[i - 1]) == diff)
        {
            curLen++;
        }
        else
        {
            diff = a[i] - a[i - 1];
        }
        maxLen = max(curLen, maxLen);
    }

    cout << "Longest subarray length is = " << maxLen << endl;
}
#include <bits/stdc++.h>
using namespace std;
bool pairsum(int arr[], int n, int k)
{
    int low = 0;
    int high = n;
    while (low < high)
    {
        if (arr[low] + arr[high] == k)
        {
            cout << low << " " << high << endl;
            return true;
        }
        else if (arr[low] + arr[high] < k)
        {
            low++;
        }
        if (arr[low] + arr[high] > k)
        {
            high--;
        }
    }
    return false;
}

int main()
{
    // int n;
    // cin >> n;
    // int a[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> a[i];
    // }

    //
    int arr[] = {2, 4, 7, 11, 14, 16, 20, 21};
    int k = 31;
    cout << pairsum(arr, 8, k);

    return 0;
}
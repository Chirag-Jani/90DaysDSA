#include <iostream>
using namespace std;
bool sortedArray(int arr[], int n)
{
    if (n == 1)
    {
        return 1;
    }
    bool ans = sortedArray(arr + 1, n - 1);

    return (arr[0] < arr[1] && ans);
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << sortedArray(arr, n) << endl;
}
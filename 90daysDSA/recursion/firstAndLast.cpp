#include <iostream>
using namespace std;
int firstOcc(int arr[], int n, int i, int element)
{
    if (i == n)
    {
        return -1;
    }

    if (arr[i] == element)
    {
        return i;
    }
    return firstOcc(arr, n, i + 1, element);
}

int lastOcc(int arr[], int n, int i, int element)
{
    if (i == n)
    {
        return -1;
    }

    int restArray = lastOcc(arr, n, i + 1, element);

    if (restArray != -1)
    {
        return restArray;
    }

    if (arr[i] == element)
    {
        return i;
    }
    return -1;
}

int main()
{
    // int n;
    // cin >> n;
    // int arr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }

    int arr[7] = {1, 2, 3, 2, 5, 7, 2};

    // int element;
    // cin >> element;

    cout << firstOcc(arr, 7, 0, 2) << endl;
    cout << lastOcc(arr, 7, 0, 2) << endl;
}
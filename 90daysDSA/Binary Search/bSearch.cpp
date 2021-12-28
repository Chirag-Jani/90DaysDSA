#include <iostream>
using namespace std;
int bSearch(int arr[], int l, int r, int key)
{
    int mid = (l + r) / 2;
    if (arr[mid] == key)
    {
        return mid;
    }
    if (key < arr[mid])
    {
        bSearch(arr, l, mid - 1, key);
    }
    else
    {
        bSearch(arr, mid + 1, r, key);
    }
}
int main()
{
    int a[] = {-8, 5, 8, 11, 26, 74, 101};
    cout << bSearch(a, 0, 6, 26);
}
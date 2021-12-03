// just trying out - not right

#include <iostream>
#include <vector>
using namespace std;
void subsetSum(int index, int sum, int arr[], int n, int ansArr[])
{
    if (index == n)
    {
        ansArr[index] = sum;
        return;
    }
    subsetSum(index + 1, sum + arr[index], arr, n, ansArr);
    subsetSum(index + 1, sum, arr, n, ansArr);
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int ansArr[n] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    subsetSum(0, 0, arr, n, ansArr);
}
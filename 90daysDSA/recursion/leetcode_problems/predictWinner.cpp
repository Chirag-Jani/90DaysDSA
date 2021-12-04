#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <array>
using namespace std;
bool PredictTheWinner(int arr[], int n, int p1, int p2)
{
    if (n == 0)
    {
        return (p1 > p2);
    }
    int choice = max(arr[0], arr[n - 1]);
    if (choice == arr[0])
    {
        PredictTheWinner(arr + 1, n - 1, p1 + choice, p2);
        PredictTheWinner(arr + 1, n - 1, p1, p2 + choice);
    }
    if (choice == arr[n - 1])
    {
        // find a way to remove last element from array and then send as argument
        PredictTheWinner(arr, n - 1, p1 + choice, p2);
        PredictTheWinner(arr, n - 1, p1, p2 + choice);
    }
}
int main()
{
    // vector<int> nums = {1, 5, 2};
    int arr[4] = {1, 5, 233, 7};

    int p1 = 0, p2 = 0;
    cout << PredictTheWinner(arr, 4, p1, p2);
}
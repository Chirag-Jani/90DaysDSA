#include <iostream>
using namespace std;
int main()
{
    int arr[6] = {0, -9, 1, 3, -4, 5};

    int max = INT32_MIN;

    for (int i = 0; i < 6; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
        cout << max << " ";
    }
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[4] = {-1, 4, 7, 2};

    for (int i = 0; i < 4; i++)
    {
        for (int j = i; j < 4; j++)
        {
            for (int k = i; k <= j; k++)
            {
                cout << a[k] << " ";
            }
            cout << endl;
        }
    }
}
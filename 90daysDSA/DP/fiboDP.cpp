#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int prev2 = 0, prev = 1;
    for (int i = 2; i <= n; i++)
    {
        int curi = prev2 + prev;
        prev2 = prev;
        prev = curi;
    }
    cout << prev;

    return 0;
}
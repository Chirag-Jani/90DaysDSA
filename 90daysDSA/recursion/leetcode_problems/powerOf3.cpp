
#include <iostream>
using namespace std;
bool isPowerOfThree(int n)
{
    if (n == 1 || n == 0)
    {
        return n;
    }
    return (n % 3 == 0) && isPowerOfThree(n / 3);
    // %3 and return both should be 1. don't try to write if conditions because it will only check one condition at a time and we need both at the same time.
}

// 1 3 9 27 81 243

int main()
{
    int n;
    cin >> n;
    cout << isPowerOfThree(n);
}

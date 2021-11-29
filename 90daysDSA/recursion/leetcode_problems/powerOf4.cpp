
#include <iostream>
using namespace std;
bool isPowerOfFour(int n)
{
    if (n == 1 || n == 0)
    {
        return n;
    }
    return (n % 4 == 0) && isPowerOfFour(n / 4);
}

// 1 4 16 64

int main()
{
    int n;
    cin >> n;
    cout << isPowerOfFour(n);
}

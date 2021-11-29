#include <iostream>
using namespace std;
bool isPowerOfTwo(int n)
{
    if (n == 1 || n == 0)
    {
        return n;
    }
    if (n % 2 == 0)
    {
        return isPowerOfTwo(n / 2);
    }
    return 0;
}

int main()
{
    int n;
    cin >> n;
    cout << isPowerOfTwo(n);
}

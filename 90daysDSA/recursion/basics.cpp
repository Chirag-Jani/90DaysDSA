#include <bits/stdc++.h>
using namespace std;

// sum till n
int sum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    int prevSum = n + sum(n - 1);

    return prevSum;
}

// factorial of a number
int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    int ans = n * fact(n - 1);

    return ans;
}

// n raised to the power k
int power(int n, int k)
{
    if (k == 0)
    {
        return 1;
    }
    int ans = n * power(n, k - 1);

    return ans;
}

// increasing - decreasing order

void inc(int n)
{
    if (n == 1)
    {
        cout << n << " ";
        return;
    }
    inc(n - 1);
    cout << n << " ";
}
void dec(int n)
{
    if (n == 1)
    {
        cout << n << " ";
        return;
    }

    cout << n << " ";
    dec(n - 1);
}

// nth term of fibonacci sequence

int fib(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }

    int ans = fib(n - 1) + fib(n - 2);
    return ans;
}

int main()
{
    // int n, k;
    // cin >> n >> k;
    // cout << sum(n) << endl;
    // cout << fact(n) << endl;
    // cout << power(n, k) << endl;

    int n;
    cin >> n;
    // inc(n);
    // cout << endl;
    // dec(n);
    cout << fib(n) << endl;
}
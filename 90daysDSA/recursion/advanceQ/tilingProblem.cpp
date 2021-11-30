#include <iostream>
using namespace std;
int tilingProblem(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    return (tilingProblem(n - 2) + tilingProblem(n - 1));
}
int main()
{
    cout << tilingProblem(4);
    return 0;
}
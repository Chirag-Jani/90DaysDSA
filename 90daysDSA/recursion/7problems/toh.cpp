#include <iostream>
using namespace std;
void toh(int n, char src, char helper, char dest)
{
    if (n == 1)
    {
        cout << "Move disk from " << src << " to " << dest << endl;
        return;
    }

    toh(n - 1, src, dest, helper);
    cout << "Move disk from " << src << " to " << dest << endl;
    toh(n - 1, helper, src, dest);
}
int main()
{
    toh(3, 'a', 'b', 'c');
    return 0;
}
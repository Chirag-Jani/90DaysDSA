#include <iostream>
using namespace std;
string movX(string s)
{
    if (s.length() == 0)
    {
        return "";
    }

    char ch = s[0];

    string ans = movX(s.substr(1));

    if (ch == 'x')
    {
        return ans + ch;
    }
    return ch + ans;
}
int main()
{
    string s = "Chxxixxxxrag";
    cout << movX(s);
}
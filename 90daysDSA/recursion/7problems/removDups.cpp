#include <iostream>
using namespace std;
string removeDups(string s)
{
    if (s.length() == 0)
    {
        return "";
    }
    char ch = s[0];
    string ans = removeDups(s.substr(1));
    if (ch == s[1])
    {
        return ans;
    }
    return ch + ans;
}
int main()
{
    string str = "cchiiiraaaagggg";
    cout << removeDups(str);
}
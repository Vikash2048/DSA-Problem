// string = "abba" ans= "abba"

#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(string str, int s, int e)
{

    if (s >= e)
        return true;
    if (str[s] != str[e])
        return false;

    else
    {
        return checkPalindrome(str, s + 1, e - 1);
    }
}

int main()
{

    string str = "abbccbba";
    int len = str.length();

    bool ans = checkPalindrome(str, 0, len - 1);

    cout << ans << endl;
    return 0;
}
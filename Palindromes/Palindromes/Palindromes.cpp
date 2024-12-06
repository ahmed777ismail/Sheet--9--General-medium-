#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s; cin >> s;
    int cntr = 1;
    bool ch = 0;
    for (int i = 0, j = s.size() - 1; i < s.size(), j >= 0; i++, j--)
    {
        if (s[i] != s[j]) {
            ch = 1;
        }
        else if (s[i] == s[i + 1])
            cntr++;
    }
    if (cntr == s.size())
        cout << 0;
    else {
        if (ch == 1)
            cout << s.size();
        else
            cout << s.size() - 1;
    }


    return 0;
}
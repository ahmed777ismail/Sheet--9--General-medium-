#include <bits/stdc++.h>

using namespace std;

int main()
{
    int sz; cin >> sz;
    string s; cin >> s;
    int arr[sz];
    int minn = INT_MAX;
    bool ch = 0;
    for (int i = 0; i < sz; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < sz; i++)
    {
        int cntr = 0;
        if (s[i] == 'R' && s[i + 1] == 'L')
        {
            int diff = arr[i + 1] - arr[i];
            if (diff == 2)
                cntr++;
            else {
                while (diff != 0) {
                    diff -= 2;

                    cntr++;
                }

            }
            minn = min(minn, cntr);
            ch = 1;
        }
        else
            continue;
    }
    if (ch == 1)
        cout << minn;
    else
        cout << -1;

    return 0;
}
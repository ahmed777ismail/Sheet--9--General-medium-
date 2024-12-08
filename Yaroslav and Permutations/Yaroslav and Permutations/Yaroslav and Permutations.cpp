#include <bits/stdc++.h>
int farr[1000000] = { 0 };
using namespace std;
int main()
{
    int sz; cin >> sz;
    long long arr[sz];
    int maxx = INT_MIN;
    for (int i = 0; i < sz; i++)
    {
        cin >> arr[i];
        farr[arr[i]]++;
    }
    for (int i = 0; i < 1000000; i++)
    {
        if (farr[i] != 0) {
            maxx = max(maxx, farr[i]);
        }
    }
    if (sz % 2 == 0)
    {
        if (maxx <= sz / 2)
            cout << "YES";
        else
            cout << "NO";
    }
    else
    {
        int fc = sz / 2;
        if (maxx <= fc + 1)
        {
            cout << "YES";
        }
        else
            cout << "NO";
    }

    return 0;
}
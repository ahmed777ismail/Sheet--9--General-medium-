#include <iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int freq[1000000] = { 0 };
int main()
{
    int n, level; cin >> n;
    int maxx = INT_MIN;
    while (n--)
    {
        cin >> level;
        if (level > maxx)
        {
            maxx = level;
        }
        freq[level]++;
    }
    long long cntr = 0;
    for (int i = 0; i <= maxx; i++)
    {
        if (freq[i] != 0)
        {
            cntr += (freq[i] - 1);
        }
    }
    if (cntr == 0)
    {
        cout << -1;
        return 0;
    }
    cout << cntr;


    return 0;
}
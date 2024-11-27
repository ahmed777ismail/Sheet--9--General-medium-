#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, b, d; cin >> n >> b >> d;
    int a, cntr = 0, max = 0;
    while (n--)
    {
        cin >> a;
        if (a > b)
            continue;
        else {
            max += a;
        }
        if (max > d) {
            max = 0;
            cntr++;
        }

    }
    cout << cntr;

    return 0;
}
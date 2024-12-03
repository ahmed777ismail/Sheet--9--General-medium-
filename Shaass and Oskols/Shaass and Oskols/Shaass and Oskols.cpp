#include <bits/stdc++.h>

using namespace std;

int main()
{
    int sz; cin >> sz;
    int arr[sz + 1];
    for (int i = 1; i <= sz; i++)
    {
        cin >> arr[i];
    }
    int t; cin >> t;
    int box, num;
    while (t--)
    {
        cin >> box >> num;
        for (int i = 1; i < num; i++)
        {
            arr[box - 1] += 1;
        }
        for (int i = num; i < arr[box]; i++)
        {
            arr[box + 1] += 1;
        }
        arr[box] = 0;

    }
    for (int i = 1; i <= sz; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    long long en, tt;
    cin >> en >> tt;
    vector<pair<int, int>> dra(tt);
    for (int i = 0; i < tt; i++) {
        cin >> dra[i].first >> dra[i].second;
    }
    sort(dra.begin(), dra.end());
    for (int i = 0; i < tt; i++) {
        if (en > dra[i].first) {
            en += dra[i].second;
        }
        else {
            cout << "NO"; return 0;
        }
    }
    cout << "YES";
}
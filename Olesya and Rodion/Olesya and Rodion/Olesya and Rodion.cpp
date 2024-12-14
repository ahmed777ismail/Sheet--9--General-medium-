#include <iostream>
#include <string>
using namespace std;
int main()
{
    int digt, div;
    cin >> digt >> div;
    if (div < 10) {
        for (int i = 0; i < digt; i++) {
            cout << div;
        }
    }
    else {
        if (digt < 2) {
            cout << -1;
        }
        else {
            cout << 1;
            for (int i = 1; i < digt; i++) {
                cout << 0;
            }
        }
    }
}
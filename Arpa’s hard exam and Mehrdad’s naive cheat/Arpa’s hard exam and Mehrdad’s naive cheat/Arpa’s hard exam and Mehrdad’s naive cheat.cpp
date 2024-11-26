#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n == 0) {
        cout << 1 << endl; // 1378^0 = 1
    }
    else {
        int cycle[] = { 6, 8, 4, 2 }; // Last digits cycle
        cout << cycle[n % 4] << endl;
    }

    return 0;
}

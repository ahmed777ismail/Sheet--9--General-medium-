#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n; // Read the number of coins
    vector<int> coins(n);
    int totalSum = 0;

    // Read the coin values and calculate the total sum
    for (int i = 0; i < n; ++i) {
        cin >> coins[i];
        totalSum += coins[i];
    }

    // Sort the coins in descending order
    sort(coins.rbegin(), coins.rend());

    int mySum = 0, count = 0;

    // Take coins until mySum is strictly larger than the remaining sum
    for (int i = 0; i < n; ++i) {
        mySum += coins[i];
        totalSum -= coins[i];
        count++;

        if (mySum > totalSum) {
            break;
        }
    }

    // Output the minimum number of coins
    cout << count << endl;

    return 0;
}

#include <bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define boda return 0 
using namespace std;


void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main(void) {
    fastIO();

    string s, s2;
    cin >> s >> s2;
    int idx = s.find('|');
    string a = s.substr(0, idx);
    string b = s.substr(idx + 1);
    int size_a = a.size();
    int size_b = b.size();
    int size_s2 = s2.size();
    if ((size_a + size_b + size_s2) % 2 != 0) {
        cout << "Impossible";
        boda;
    }



    for (int i = 0; i < size_s2; i++) {

        if (size_a > size_b) {
            b += s2[i];
            size_b++;
        }
        else if (size_a <= size_b) {
            a += s2[i];
            size_a++;
        }

    }


    if (size_a != size_b) {
        cout << "Impossible";
        boda;
    }

    else {
        cout << a << "|" << b;
        boda;
    }


}
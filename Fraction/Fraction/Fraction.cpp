#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
typedef long long ll;

ll g1(ll n2, ll n4)
{
    while (n4)
    {
        ll x = n2;
        n2 = n4;
        n4 = x % n4;
    }
    return n2;
}
ll g2(ll n1, ll n3)
{
    while (n3)
    {
        ll y = n1;
        n1 = n3;
        n3 = y % n3;
    }
    return n1;
}


int main()
{

    ll n1, n2, n3, n4;
    char c1, c2;
    cin >> n1 >> c1 >> n2 >> n3 >> c2 >> n4;

    ll r1 = (n1 / g2(n1, n3)) * n3;
    ll r2 = g2(n2, n4);
    cout << r1 << '/' << r2 << endl;




    return 0;
}
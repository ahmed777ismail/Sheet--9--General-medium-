#include <iostream>
using namespace std;
int main()
{
	int n, m, sum;
	cin >> n >> m;
	int two = n / 2;
	int one = n % 2;
	if (n < m)
	{
		cout << -1;
	}
	else
	{
		for (int i = 0; ; i++)
		{
			sum = two + one;
			if (sum % m == 0)
			{
				cout << sum;
				break;
			}
			two--;
			one += 2;
		}
	}
}
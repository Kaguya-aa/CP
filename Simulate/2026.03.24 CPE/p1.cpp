#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t; cin >> t;
	for (int i = 1; i <= t; i++)
	{
		long long int n; cin >> n;
		cout << "Case #" << i << ": " << n;
		set<int> py;
		while (n != 1)
		{
			int sum = 0;
			if (py.count(n)) break;
			py.insert(n);
			while (n)
			{
				sum += (n % 10) * (n % 10);
				n /= 10;
			}
			n = sum;
		}
		if (n == 1) cout << " is a Happy number.\n";
		else cout << " is an Unhappy number.\n";
	}
}

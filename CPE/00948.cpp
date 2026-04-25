#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t; cin >> t;
	vector<int> f(50);
	f[0] = 1; f[1] = 2;
	for (int i = 2; i < 40; i++) f[i] = f[i - 1] + f[i - 2];
	while (t--)
	{
		int n; cin >> n;
		cout << n << " = ";
		bool s = false;
		for (int i = 39; i >= 0; i--)
		{
			if (n >= f[i])
			{
				cout << "1";
				n -= f[i];
				s = true;
			}
			else if (s) cout << "0";
		}
		cout << " (fib)\n";
	}
}

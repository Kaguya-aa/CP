#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	long long int  t; cin >> t;
	while (t--)
	{
		long long int n; cin >> n;
		long long int  mn = LLONG_MAX;
		for (long long int a = 1; a <= n; a++)
		{
			if (n % a != 0) continue;
			for (long long int b = 1; b * a <= n; b++)
			{
				if ((n / a) % b != 0) continue;
				long long int c = n / (a * b);
				mn = min(mn, 2 * ((a * b) + (b * c) + (a * c)));
			}
		}
		cout << mn << '\n';
	}
}

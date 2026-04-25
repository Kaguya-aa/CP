#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t; cin >> t;
	for (int i = 1; i <= t; i++)
	{
		cout << "Case " << i << ": ";
		int a, b; cin >> a >> b;
		int sum = 0;
		for (int j = min(a, b); j <= max(a, b); j++)
		{
			if (j % 2 != 0) sum += j;
		}
		cout << sum << '\n';
	}
}

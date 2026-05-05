#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	while (cin >> n)
	{
		bool vis[10000] = {false};
		if (n == 0) break;
		int ans = 0;
		while (true)
		{
			if (vis[n]) break;
			ans++;
			vis[n] = true;
			n = ((n * n) / 100) % 10000;
		}
		cout << ans << '\n';
	}
}

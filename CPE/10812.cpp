#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t; cin >> t;
	while (t--)
	{
		int s, d; cin >> s >> d;
		int a = (s + d) / 2;
		int b = (s - d) / 2;
		if (a + b == s and a - b == d and a >= 0 and b >= 0) cout << max(a, b) << " " << min(a, b) << '\n';
		else cout << "impossible\n";
	}
}

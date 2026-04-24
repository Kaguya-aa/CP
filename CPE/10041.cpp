#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n; cin >> n;
	while (n--)
	{
		int l; cin >> l;
		vector<int> a(l);
		for (int i = 0; i < l; i++) cin >> a[i];
		sort(a.begin(), a.end());
		int loc = a[l / 2];
		int ans = 0;
		for (int i = 0; i < l; i++) ans += abs(a[i] - loc);
		cout << ans << '\n';
	}
}

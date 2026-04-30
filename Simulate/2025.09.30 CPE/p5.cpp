#include <bits/stdc++.h>
using namespace std;
int n, k;
vector<int> a;
bool check(int l)
{
	int cur = 0;
	int used = 0;
	for (int d : a)
	{
		if (d > l) return false;
		if (cur + d <= l)
		{
			cur += d;
		}
		else
		{
			used++;
			cur = d;
		}
	}
	used++;
	return used <= k + 1;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	while (cin >> n >> k)
	{
		a.resize(n + 1);
		int sum = 0, mx = 0;
		for (int i = 0; i < n + 1; i++)
		{
			cin >> a[i];
			sum += a[i];
			mx = max(mx, a[i]);
		}
		int l = mx, r = sum;
		int ans = mx;
		while (l <= r)
		{
			int mid = (l + r) >> 1;
			if (check(mid))
			{
				ans = mid;
				r = mid - 1;
			}
			else l = mid + 1;
		}
		cout << ans << '\n';
	}
}

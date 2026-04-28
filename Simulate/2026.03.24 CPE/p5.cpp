#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		vector<int> a(n);
		for (int i = 0; i < n; i++) cin >> a[i];
		sort(a.begin(), a.end(), [](int a, int b)
		{
			return abs(a) > abs(b);
		});
		int mx = 0; int l = 0;
		for (int i = 0; i < n; i++)
		{
			int c = (a[i] > 0) ? 1 : -1;
			if (l != c or l == 0) 
			{
				mx++;
				l = c;
			} 
		}
		cout << mx << '\n';
	}
}

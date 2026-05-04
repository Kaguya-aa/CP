#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t; cin >> t;
	for (int i = 1; i <= t; i++)
	{
		cout << "Case #" << i << ":\n";
		vector<pair<string, int>> v(10);
		for (int i = 0; i < 10; i++) cin >> v[i].first >> v[i].second;
		int mx = INT_MIN;
		for (int i = 0; i < 10; i++)
		{
			if (v[i].second > mx) mx = v[i].second;
		}
		
		for (int i = 0; i < 10; i++)
		{
			if (mx == v[i].second) cout << v[i].first << '\n';
		}
	}
}

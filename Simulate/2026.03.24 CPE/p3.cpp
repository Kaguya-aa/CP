#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t; cin >> t;
	cin.ignore();
	string s; getline(cin, s);
	while (t--)
	{
		map<string, int> mp;
		int sum = 0;
		while (getline(cin, s) and !s.empty())
		{
			mp[s]++;
			sum++;
		}
		vector<pair<string, int>> a;
		for (auto it : mp)
		{
			a.push_back({it.first, it.second});
		}
		cout << fixed << setprecision(4);
		for (int i = 0; i < a.size(); i++)
		{
			double w = (100.0 * a[i].second) / sum;
			cout << a[i].first << " " << w << '\n';
		}
		if (t > 0) cout << '\n';
	}
}

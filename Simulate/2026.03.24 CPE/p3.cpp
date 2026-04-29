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
		cout << fixed << setprecision(4);
		for (auto it : mp)
		{
			double w = (it.second * 100.0) / sum;
			cout << it.first << " " << w << '\n';
		}
		if (t > 0) cout << '\n';
	}
}

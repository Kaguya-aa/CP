#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<char, int> a, pair<char, int> b)
{
	if (a.second != b.second) return a.second > b.second;
	return a.first < b.first;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n; cin >> n;
	cin.ignore();
	vector<pair<char, int>> g(26);
	for (int i = 0; i < 26; i++) g[i] = {i + 'A', 0};
	while (n--)
	{
		string s; getline(cin, s);
		for (int i = 0; i < s.size(); i++)
		{
			if ('A' <= s[i] and s[i] <= 'Z') g[ s[i] - 'A'].second++;
			if ('a' <= s[i] and s[i] <= 'z') g[ s[i] - 'a'].second++;
		}
	}
	sort(g.begin(), g.end(), cmp);
	for (int i = 0; i < 26; i++)
	{
		if (g[i].second > 0) cout << g[i].first << " " << g[i].second << '\n';
	}
}

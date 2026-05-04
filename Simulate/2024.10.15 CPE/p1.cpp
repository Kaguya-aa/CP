#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<char, int> a, pair<char, int> b)
{
	if (a.second != b.second) return a.second > b.second;
	return b.second > a.second;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n; cin >> n;
	cin.ignore();
	map<char, int> mp;
	while (n--)
	{
		string s; getline(cin, s);
		for (int i = 0; i < s.size(); i++)
		{
			char w = toupper(s[i]);
			if ('A' <= w and w <= 'Z') mp[w]++;
		}
	}
	vector<pair<char, int>> v;
	for (auto it : mp)  v.push_back({it.first, it.second});
	
	sort(v.begin(), v.end(), cmp);
	for (int i = 0; i < v.size(); i++) cout << v[i].first << " " << v[i].second << '\n';
}

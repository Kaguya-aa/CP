#include <bits/stdc++.h>
using namespace std;
map<string, int> mp;
void build()
{
	queue<string> q;
	for (char c = 'a'; c <= 'z'; ++c) q.push({c});
	int id = 1;
	while (!q.empty())
	{
		auto cur = q.front(); q.pop();
		mp[cur] = id++;
		if (cur.size() < 5)
		{
			for (char next = cur.back() + 1; next <= 'z'; ++next) q.push(cur + next);
		}
	}	
}
bool check(string a)
{
	if (a.size() == 1) return true;
	for (int i = 0; i < a.size() - 1; i++)
	{
		if (a[i] >= a[i + 1]) return false;
	}
	return true;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	string s;
	build();
	while (cin >> s) 
	{
		if (check(s)) cout << mp[s] << '\n';
		else cout << 0 << '\n';
	}
}

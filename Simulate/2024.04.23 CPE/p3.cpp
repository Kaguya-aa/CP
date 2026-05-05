#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int l, p; cin >> l >> p;
	vector<pair<string, string>> v(l);
	for (int i = 0; i < l; i++) cin >> v[i].first >> v[i].second;
	
	while (p--)
	{
		bool find = false;
		string s; cin >> s;
		for (int i = 0; i < l; i++)
		{
			if (s == v[i].first)
			{
				cout << v[i].second << '\n';
				find = true;
				break;
			}
		}
		if (find) continue;
		
		
		int n = s.size();
		if (n >= 2 and s[n - 1] == 'y')
		{
			char pre = s[n - 2];
			if (pre != 'a' and pre != 'e' and pre != 'i' and pre != 'o' and pre != 'u')
			{
				cout << s.substr(0, n - 1) << "ies\n";
				continue;
			}
		}
		
		if (s[n - 1] == 'o' or s[n - 1] == 's' or s[n - 1] == 'x' or (n >= 2 and s.substr(n - 2) == "ch" or s.substr(n - 2) == "sh"))
		{
			cout << s << "es\n";
			continue;
		}
		cout << s << "s\n";
		
	}
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n; cin >> n;
	cin.ignore();
	map<string, int> mp;
	while (n--)
	{
		string s; getline(cin, s);
		stringstream ss(s);
		string word;
		ss >> word;
		mp[word]++;
	}
	for (auto &i : mp) cout << i.first << " " << i.second << '\n';
}

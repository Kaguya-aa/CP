#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n; cin >> n;
	string s; 
	cin.ignore(); 
	getline(cin, s);
	while (n--)
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
		sort(a.begin(), a.end());
		cout << fixed << setprecision(4);
		for (int i = 0; i < a.size(); i++)
		{
			double w = (double)a[i].second * 100 / sum;
			cout << a[i].first << " " << w << '\n';
		}
		if (n > 0) cout << "\n";
	}
}

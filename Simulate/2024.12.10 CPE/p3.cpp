#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int x;
	while (cin >> x)
	{
		cin.ignore();
		string s; getline(cin, s);
		vector<int> v;
		stringstream ss(s);
		int py;
		while (ss >> py) v.emplace_back(py);
		
		long long int ans = 0;
		int n = v.size() - 1;
		for (int i = 0; i < n; i++)
		{
			ans = ans * x + (long long int)v[i] * (n - i);
		}
		cout << ans << '\n';
	}
}

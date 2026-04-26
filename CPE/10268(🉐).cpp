#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	long long int x;
	while (cin >> x)
	{
		string line;
		getline(cin, line);
		getline(cin, line);
		stringstream ss(line);
		vector<long long int> co;
		long long int c;
		while (ss >> c)
		{
			co.emplace_back(c);
		}
		int n = co.size() - 1;
		long long int ans = 0;
		for (int i = 0; i < n; i++)
		{
			ans = ans * x + co[i] * (n - i);
		}
		cout << ans << '\n';
	}
}

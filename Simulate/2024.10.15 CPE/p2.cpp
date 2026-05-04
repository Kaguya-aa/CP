#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	vector<int> v;
	while (cin >> n)
	{
		v.push_back(n);
		sort(v.begin(), v.end());
		if (v.size() % 2 != 0) cout << v[v.size() / 2];
		else cout << (v[v.size() / 2] + v[v.size() / 2 - 1]) / 2;
		cout << '\n';
	}
}

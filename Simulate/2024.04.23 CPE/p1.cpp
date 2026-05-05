#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	long long int t; cin >> t;
	while (t--)
	{
		long long int n; cin >> n;
		vector<long long int> v(n);
		for (long long int i = 0; i < n; i++) cin >> v[i];
		sort(v.begin(), v.end());
		long long int sum = 0;
		for (long long int i = 0; i < n; i++)
		{
			sum += abs(v[i] - v[n / 2]);
		}
		cout << sum << '\n';
	}	
}

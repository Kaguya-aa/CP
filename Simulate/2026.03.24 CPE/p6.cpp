#include <bits/stdc++.h>
using namespace std;
long long H(int n)
{
	if (n == 0) return 0;
	long long res = 0;
	for (long long l = 1, r; l <= n; l = r + 1)
	{
		r = n / (n / l);
		res += (long long)(n / l) * (r - l + 1);
	}
	return res;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		cout << H(n) << '\n';
	}

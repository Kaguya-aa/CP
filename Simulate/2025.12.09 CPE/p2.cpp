#include <bits/stdc++.h>
using namespace std;
int n, m;
bool cmp(int a, int b)
{
	if (a % m != b % m) return (a % m) < (b % m);
	bool is_odd_a = abs(a % 2) == 1;
	bool is_odd_b = abs(b % 2) == 1;
	if (is_odd_a == true and is_odd_b == false) return true;
	else if (is_odd_a == false and is_odd_b == true) return false;
	if (is_odd_a and is_odd_b) return a > b;
	return b > a;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	while (cin >> n >> m)
	{
		cout << n << " " << m << '\n';
		if (n == 0 and m == 0) break;
		vector<int> a(n);
		for (int i = 0; i < n; i++) cin >> a[i];
		sort(a.begin(), a.end(), cmp);
		for (int i = 0; i < n; i++) cout << a[i] << '\n';
	}
}

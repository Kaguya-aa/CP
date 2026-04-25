#include <bits/stdc++.h>
using namespace std;
int n, m;
bool cmp(int x, int y)
{
	if (x % m < y % m) return true;
	else if (x % m > y % m) return false;
	else 
	{
		bool xx = (x % 2 != 0); // false 奇
		bool yy = (y % 2 != 0); // true 偶
		if (!xx and yy) return false;
		else if (!yy and xx) return true;
		else if (xx and yy) return x > y;
		return x < y;
	}
}
int main()
{
	while (cin >> n >> m)
	{
		cout << n << " " << m << '\n';
		if (n == 0 == m) break;
		vector<int> a(n);
		for (int i = 0; i < n; i++) cin >> a[i];
		sort(a.begin(), a.end(), cmp);
		for (int i = 0; i < n; i++) cout << a[i] << '\n';
	}
}

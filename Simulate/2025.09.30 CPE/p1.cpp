#include <bits/stdc++.h>
using namespace std;
int h(int n)
{
	if (n == 1) return 1;
	else
	{
		if (n % 2 == 0) return 1 + h(n / 2);
		else return 1 + h(3 * n + 1);
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int a, b;
	while (cin >> a >> b)
	{
		cout << a << " " << b << " ";
		int mx = INT_MIN;
		for (int i = min(a, b); i <= max(a, b); i++)
		{
			mx = max(mx, h(i));
		}
		cout << mx << '\n';
	}
}

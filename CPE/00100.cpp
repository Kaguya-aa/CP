#include <bits/stdc++.h>
using namespace std;
int check(int n)
{
	if (n == 1) return 1;
	if (n % 2 == 1) return 1 + check(3 * n + 1);
	else return 1 + check(n / 2);
}
int main()
{
	int a, b;
	while (cin >> a >> b)
	{
		cout << a << " " << b << " ";
		int mx = INT_MIN;
		for (int i = min(a, b); i <= max(a, b); i++)
		{
			mx = max(mx, check(i));
		}
		cout << mx << '\n';
	}
}

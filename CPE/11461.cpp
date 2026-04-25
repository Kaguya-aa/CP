#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int a, b;
	while (cin >> a >> b)
	{
		if (a == 0 and b == 0) break;
		int c = 0;
		for (int i = min(a, b); i <= max(a, b); i++)
		{
			double x = sqrt(i);
			if (x == (int)x) c++;
		}
		cout << c << '\n';
	}
}

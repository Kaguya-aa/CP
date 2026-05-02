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
		int count = 0;
		for (int i = min(a, b); i <= max(a, b); i++)
		{
			double w = sqrt(i);
			if (w == int(w)) count++;
		}
		cout << count << '\n';
	}
}

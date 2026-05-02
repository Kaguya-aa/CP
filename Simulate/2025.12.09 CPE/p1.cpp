#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	long long int n;
	while (cin >> n)
	{
		if (n < 0) break;
		cout << 1 + ((n + 1) * n) / 2 << '\n';
	}
}

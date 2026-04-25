#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int s; cin >> s;
	while (s--)
	{
		int n; cin >> n;
		double p; cin >> p;
		int i; cin >> i;
		if (p == 0)
		{
			cout << "0.0000\n"; continue;
		}
		double first = pow(1.0 - p, i - 1) * p;
		double r = pow(1.0 - p, n);
		cout << fixed << setprecision(4) << first / (1.0 - r) << '\n';
	}
}

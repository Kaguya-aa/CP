#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	long long int n; cin >> n;
	for (long long int i = 1; i <= n; i++)
	{
		cout << "Case " << i << ": ";
		long long int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
		long long int s1 = ((x1 + y1) * (x1 + y1 + 1)) / 2 + x1;
		long long int s2 = ((x2 + y2) * (x2 + y2 + 1)) / 2 + x2;
		cout << s2 - s1 << '\n';
	}
}

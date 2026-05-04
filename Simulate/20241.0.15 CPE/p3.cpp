#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	double n;
	while (cin >> n)
	{
		if (n == 0) break;
		if (sqrt(n) == int(sqrt(n))) cout << "yes\n";
		else cout << "no\n";
	}
}

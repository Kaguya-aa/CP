#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n = 1;
	char c;
	while (cin.get(c))
	{
		if (c == '"')
		{
			n++;
			if (n % 2) cout << "''";
			else cout << "``";
		}
		else cout << c;
	}
}

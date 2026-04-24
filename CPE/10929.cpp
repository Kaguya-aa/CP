#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	string s;
	while (cin >> s)
	{
		if (s == "0") break;
		int a = 0, b = 0;
		for (int i = 0; i < s.size(); i++)
		{
			if (i % 2 == 0) a += s[i] - '0';
			else b += s[i] - '0';
		}
		if ((a - b) % 11 == 0) cout << s << " is a multiple of 11.\n";
		else cout << s << " is not a multiple of 11.\n";
	}
}

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
		while (true)
		{
			if (s.size() == 1) break;
			int sum = 0;
			for (int i = 0; i < s.size(); i++) sum += s[i] - '0';
			s = to_string(sum);
			
		}
		cout << s << '\n';
	}
}

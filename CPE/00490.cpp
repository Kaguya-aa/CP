#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	vector<string> s;
	string a;
	int len = INT_MIN;
	while (getline(cin, a)) 
	{
		s.emplace_back(a);	
		len = max(len, (int)a.size());
	}
	for (int i = 0; i < len; i++)
	{
		for (int j = s.size() - 1; j >= 0; j--)
		{
			if (i < s[j].size()) cout << s[j][i];
			else cout << " ";
		}
		cout << '\n';
	}
}

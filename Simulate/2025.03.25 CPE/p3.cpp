#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	string s;
	set<string> st;
	while (getline(cin, s))
	{
		for (int i = 0; i < s.size(); i++)
		{
			if (!isalpha(s[i])) s[i] = ' ';
			else s[i] = towlower(s[i]);
		}
		string word;
		stringstream ss(s);
		while (ss >> word)
		{
			st.insert(word);
		}
	}
	for (auto it : st) cout << it << '\n';
}

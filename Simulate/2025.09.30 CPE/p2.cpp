#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	string s;
	while (getline(cin, s))
	{
		bool f = true;
		stringstream ss(s);
		string word;
		while (ss >> word)
		{
			if (!f) cout << " ";
			for (int i = word.size() - 1; i >= 0; i--) cout << word[i];
			f = false;
		}
		cout << '\n';
	}
}

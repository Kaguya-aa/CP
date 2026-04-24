#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	string a, b; 
	while (getline(cin, a), getline(cin, b))
	{
		vector<int> aa(26, 0);
		vector<int> bb(26, 0);
		for (int i = 0; i < a.size(); i++) aa[a[i] - 'a']++;
		for (int i = 0; i < b.size(); i++) bb[b[i] - 'a']++;
		
		for (int i = 0; i < 26; i++)
		{
			for (int j = 0; j < min(bb[i], aa[i]); j++)
			{
				cout << (char)('a' + i);
			}
		}
		cout << '\n';
	}
}

#include <bits/stdc++.h>
using namespace std;
int n;
vector<int> a;
vector<int> s(6);
void dfs(int now, int coount)
{
	if (coount == 6)
	{
		for (int i = 0; i < 6; i++) 
		{
			if (i == 5) cout << s[i];
			else cout << s[i] << " ";
		}
		cout << '\n'; return;
	}
	for (int i = now; i < n; i++)
	{
		s[coount] = a[i];
		dfs(i + 1, coount + 1);
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);	
	bool f = true;
	while (cin >> n)
	{
		if (n == 0) break;
		if (f) f = false;	
		else cout << '\n';
		a.resize(n);
		for (int i = 0; i < n; i++) cin >> a[i];
		dfs(0, 0);
	}
}

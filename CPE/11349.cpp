#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n; cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cout << "Test #" << i << ": ";
		char a, b; cin >> a >> b;
		int t; cin >> t;
		vector<vector<long long int>> g;
		g.resize(t, vector<long long int> (t));
		bool same = true;
		for (int i = 0; i < t; i++)
		{
			for (int j = 0; j < t; j++) 
			{
				cin >> g[i][j];
				if (g[i][j] < 0) same = false;	
			}
		}
		for (int i = 0; i < t; i++)
		{
			for (int j = 0; j < t; j++)
			{
				if (g[i][j] != g[t - 1 - i][t - j - 1]) 
				{
					same = false;
					break;
				}
			}
		}
		if (same) cout << "Symmetric.\n";
		else cout << "Non-symmetric.\n";
	}
}

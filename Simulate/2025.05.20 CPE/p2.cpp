#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	while (cin >> n)
	{
		if (n == 0) break;
		vector<vector<int>> g(n, vector<int> (n));
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cin >> g[i][j];
			}
		}
		vector<int> row(n);
		vector<int> col(n);
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				col[i] += g[j][i];
				row[i] += g[i][j];
			}
		}
		vector<int> oddr;
		vector<int> oddc;
		for (int i = 0; i < n; i++)
		{
			if (row[i] % 2 != 0) oddr.emplace_back(i + 1);
			if (col[i] % 2 != 0) oddc.emplace_back(i + 1);
		}
		if (oddr.empty() and oddc.empty()) cout << "OK\n";
		else if (oddr.size() == 1 and oddc.size() == 1) cout << "Change bit (" << oddr[0] << "," << oddc[0] << ")\n";
		else cout << "Corrupt\n";
		
	}
}

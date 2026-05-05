#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t; cin >> t;
	while (t--)
	{
		int m, n, q; cin >> m >> n >> q;
		cout << m << " " << n << " " << q << '\n';
		vector<vector<char>> g(m, vector<char> (n));
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++) 
			{
				cin >> g[i][j];
			}
		}		
		while (q--)
		{
			int r, c; cin >> r >> c;
			char ta = g[r][c];
			int w = 0;
			while (true)
			{
				bool ok = true;
				int nr = w + 1;
				if (r - nr < 0 or r + nr >= m or c - nr < 0 or c + nr >= n) break;
				for (int i = r - nr; i <= r + nr; i++)
				{
					if (g[i][c - nr] != ta or g[i][c + nr] != ta) 
					{
						ok = false;
						break;
					}
				}
				if (!ok) break;
				for (int i = c - nr; i <= c + nr; i++)
				{
					if (g[r - nr][i] != ta or g[r + nr][i] != ta)
					{
						ok = false;
						break;
					}
				}
				if (ok) w++;
				else break;
			}
			cout << 2 * w + 1 << '\n';
		}
	}
}

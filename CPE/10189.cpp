#include <bits/stdc++.h>
using namespace std;
int dx[8] = {1, 1, 1, 0, -1, -1, -1, 0};
int dy[8] = {1, 0, -1, -1, -1, 0, 1, 1};
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, m;
	int c = 1;
	while (cin >> n >> m)
	{
		if (n == 0 and m == 0) break;
		if (c > 1) cout << '\n';
		cout << "Field #" << c << ":\n";
		c++;
		vector<vector<char>> g(n, vector<char> (m));
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				cin >> g[i][j];
			}
		}
		
		
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				if (g[i][j] == '*') 
				{
					cout << "*";
					continue;	
				}
				else
				{
					int sum = 0;
					for (int d = 0; d < 8; d++)
					{
						int nx = i + dx[d];
						int ny = j + dy[d];
						if (nx >= 0 && nx < n && ny >= 0 && ny < m) 
						{
                            if (g[nx][ny] == '*') sum++;
                        }
					}
					cout << sum;
				}
			}
			cout << '\n';
		}
	}
}

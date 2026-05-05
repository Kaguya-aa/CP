#include <bits/stdc++.h>
using namespace std;
int sum = 0;
vector<vector<int>> g;
int n, m, l;
bool vis[10005] = {false};
void dfs(int s)
{
	vis[s] = true;
	sum++;
	for (int i : g[s])
	{
		if (!vis[i]) dfs(i);
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t; cin >> t;
	while (t--)
	{
		memset(vis, 0, sizeof(vis));
		cin >> n >> m >> l;
		g.clear();
		g.resize(n + 1);
		sum = 0;
		for (int i = 0; i < m; i++)
		{
			int x, y; cin >> x >> y;
			g[x].push_back(y);
		}		
		
		while (l--)
		{
			int z; cin >> z;
			if (!vis[z]) dfs(z);
			
		}
		cout << sum << '\n';
	}
	
}

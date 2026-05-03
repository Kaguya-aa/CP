#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		vector<vector<int>> v(n);
		
		for (int j = 0; j < n; j++)
		{
			int m; cin >> m;
			for (int i = 0; i < m; i++)
			{
				int tmp; cin >> tmp;
				v[j].emplace_back(tmp);
			}
		}
		
		
		int c = 0, d = -1; // 被殺牛數 上次殺牛數
		int cow = -1;
		vector<int> k(n, 0);
		for (int i = 1; i - d <= 2520; i++)
		{
			int mn = INT_MAX;
			for (int j = 0; j < n; j++)
			{
				if (k[j]) continue;
				int milk = v[j][i % v[j].size()];
				if (mn > milk)
				{
					mn = milk;
					cow = j;
				}
				else if (mn == milk) cow = -1;
			}
			if (cow != -1)
			{
				k[cow] = 1;
				d = i;
				c++;
			}
		}
		cout << n - c << " " << d + 1 << '\n';
	}
}

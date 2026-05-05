#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> ans;
vector<int> path;
void dfs(int n)
{
	if (n == 1)
	{
		if (path.size() > 1)
		{
			ans.push_back(path);
		}
		return;
	}
	int pre = path.empty() ? 2 : path.back();
	for (int i = pre; i <= n; i++)
	{
		if (n % i == 0)
		{
			path.push_back(i);
			dfs(n / i);
			path.pop_back();
		}
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	while (cin >> n)
	{
		if (n == 0) break;
		if (n == 1) cout << 0 << '\n';
		else	
		{
			ans.clear();
			dfs(n);
			cout << ans.size() << '\n';
			for (auto a : ans)
			{
				for (int i = 0; i < a.size(); i++)
				{
					cout << a[i] << (i == a.size() - 1 ? "\n" : " ");
				}
			}
		}
	}
}

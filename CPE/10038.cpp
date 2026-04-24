#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	while (cin >> n)
	{
		vector<int> a(n);
		for (int i = 0; i < n; i++) cin >> a[i];
		vector<int> py;
		for (int i = 0; i < n - 1; i++)
		{
			py.emplace_back(abs(a[i] - a[i + 1]));
		}
		vector<int> f;
		sort(py.begin(), py.end());
		for (int i = 0; i < py.size(); i++) f.emplace_back(i + 1);
		bool pypd = true;
		for (int i = 0; i < py.size(); i++)
		{
			if (f[i] != py[i])
			{
				pypd = false;
				break;
			}
		}
		if (pypd) cout << "Jolly\n";
		else cout << "Not jolly\n";
	}
}

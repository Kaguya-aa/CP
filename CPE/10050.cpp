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
		int p; cin >> p;
		vector<int> h(p);
		for (int i = 0; i < p; i++) cin >> h[i];
		int sum = 0;
		for (int i = 1; i <= n; i++)
		{
			if (i % 7 == 6 or i % 7 == 0) continue;
			bool dick = false;
			for (int j = 0; j < p; j++)
			{
				if (i % h[j] == 0) 
				{
					dick = true;
					break;
				}
			}
			if (dick) sum++;
		}
		cout << sum << '\n';
		
	}
}

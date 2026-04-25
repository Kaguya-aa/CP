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
		vector<int> a(n);
		int c = 0;
		for (int i = 0; i < n; i++) cin >> a[i];
		for (int i = 0; i < n; i++)
		{
			for (int j = i + 1; j < n; j++)
			{
				if (a[j] < a[i]) 
				{
					swap(a[i], a[j]);
					c++;	
				}
			}
		}
		cout << "Optimal train swapping takes " << c << " swaps.\n";
	}
}

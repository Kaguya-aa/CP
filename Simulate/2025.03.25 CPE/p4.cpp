#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int cs; cin >> cs;
	while (cs--)
	{
		double vv, tt; cin >> vv >> tt;
		int q; cin >> q;
		vector<double> h(q + 1, 0.0);
		vector<double> v(q + 1, 0.0);
		for (int i = 1; i <= q; i++)
		{
			int vo, te; cin >> vo >> te;
			v[i] = v[i - 1] + vo;
			h[i] = h[i - 1] + (vo * te);
		}
		
		double mn = 1e20;
		int a = -1, b = -1;
		for (int i = 1; i <= q; i++)
		{
			for (int j = i; j <= q; j++)
			{
				double vvv = v[j] - v[i - 1];
				if (vvv > vv) break;
				double hhh = h[j] - h[i - 1];
				double temp = hhh / vvv;
				if (vvv > (vv / 2.0) and abs(tt - temp) <= 5)
				{
					if (abs(tt - temp) < mn)
					{
						mn = abs(tt - temp);
						a = i - 1, b = j - 1;
					}
				}
			}
		}
		if (a == -1) cout << "Not possible\n";
		else cout << a << " " << b << '\n';
	}
}

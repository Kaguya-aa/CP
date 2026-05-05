#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	double h, u, d, f;
	while (cin >> h >> u >> d >> f)
	{
		if (h == 0) break;
		double cur = 0;
		double loss = u * (f / 100);
		int day = 1;
		while (true)
		{
			cur += u;
			if (cur > h)
			{
				cout << "success on day " << day << '\n';
				break;
			}
			cur -= d;
			if (cur < 0) 
			{
				cout << "failure on day " << day << '\n';
				break;	
			}
			u -= loss;
			day++;
			if (u < 0) u = 0;
		}
	}
}

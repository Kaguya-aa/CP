#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cout << "PERFECTION OUTPUT\n";
	while (cin >> n)
	{
		if (n == 0) break;
		cout << setw(5) << n;
		if (n == 1)
		{
			cout << "  DEFICIENT\n";
			continue;
		}
		vector<int> v;
		for (int i = 1; i <= 60000; i++)
		{
			if (n % i == 0)
			{
				if (i != n) v.emplace_back(i);
			}
		}
		int sum = 0;
		for (int i = 0; i < v.size(); i++) sum += v[i];
		if (sum == n) cout << "  PERFECT\n";
		else if (n > sum) cout << "  DEFICIENT\n";
		else if (n < sum) cout << "  ABUNDANT\n";
	}
	cout << "END OF OUTPUT\n";
}

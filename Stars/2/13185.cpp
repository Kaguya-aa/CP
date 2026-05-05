#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t; cin >> t;
	while (t--)
	{
		long long int n; cin >> n;
		long long int sum = 1;
		if (n == 1) 
		{
			cout << "deficient\n";
			break;
		}
		for (int i = 2; i <= sqrt(n); i++)
		{
			if (n % i == 0) 
			{
				sum += i;
				if (i * i != n) sum += n / i;
			}
		}
		if (sum == n) cout << "perfect\n";
		else if (sum > n) cout << "abundant\n";
		else if (sum < n) cout << "deficient\n";
	}
}

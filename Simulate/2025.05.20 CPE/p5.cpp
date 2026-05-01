#include <bits/stdc++.h>
using namespace std;
long long int c[5] = {1, 5, 10, 25, 50};
int main()
{
	vector<long long int> dp(30005, 0);
	dp[0] = 1;
	for (long long int i = 0; i < 5; i++)
	{
		for (long long int j = c[i]; j <= 30000; j++)
		{
			dp[j] += dp[j - c[i]];
		}
	}

	ios::sync_with_stdio(false);
	cin.tie(0);
	long long int n; 
	while (cin >> n)
	{
		
		if (dp[n] == 1) cout << "There is only 1 way to produce " << n << " cents change.\n";
		else cout << "There are " << dp[n] << " ways to produce " << n << " cents change.\n";
	}
	
}

#include <bits/stdc++.h>
using namespace std;
vector<bool> prime(1000005, true);
void pp()
{
	prime[0] = false; prime[1] = false;
	for (int i = 2; i <= 1000000; i++)
	{
		if (prime[i]) 
		{
			for (int j = 2 * i; j < 1000000; j += i)
			{
				prime[j] = false;
			}
		}
		
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	bool f = true;
	pp();
	while (cin >> n)
	{
		if (n == 0) break;
		bool find = false;
		for (int i = 3; i <= n / 2; i++)
		{
			int j = n - i;
		
			if (j % 2 == 1 and i % 2 == 1 and prime[i] and prime[j]) 
			{
				cout << n << " = " << i << " + " << j << '\n';
				find = true;
				break;
			}
		}
		if (!find) cout << "Goldbach's conjecture is wrong.\n";
	}
}

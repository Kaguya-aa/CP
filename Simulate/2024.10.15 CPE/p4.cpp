#include <bits/stdc++.h>
using namespace std;
vector<bool> isprime(1000001, true);
vector<long long int> prime;
vector<long long int> am;
int main()
{
	isprime[0] = false; isprime[1] = false;
	for (int i = 2; i <= 1000000; i++)
	{
		if (isprime[i])
		{
			prime.push_back(i);
			for (int j = i + i; j <= 1000000; j += i) isprime[j] = false;
		}
	}
	
	for (long long int p : prime)
	{
		long long int a = p * p;
		while (a <= 1000000000000LL) 
		{
			am.push_back(a);
			if (1000000000000LL / p < a) break;
			a *= p;
		}
	}
	ios::sync_with_stdio(false);
	cin.tie(0);
	sort(am.begin(), am.end());
	int t; cin >> t;
	while (t--)
	{
		long long int low, high; cin >> low >> high;
		
		auto py1 = upper_bound(am.begin(), am.end(), high);
		auto py2 = lower_bound(am.begin(), am.end(), low);
		cout << distance(py2, py1) << '\n';
	}
}

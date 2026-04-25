#include <bits/stdc++.h>
using namespace std;
string bin(long long int n)
{
	if (n == 0) return "0";
	string py = "";
	while (n > 0)
	{
		py += (n % 2) + '0';
		n /= 2;
	}
	reverse(py.begin(), py.end());
	return py;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t; cin >> t;
	while (t--)
	{
		long long int n; cin >> n;
		string s = bin(n);
		int b1 = 0;
		for (int i = 0; i < s.size(); i++) 
		{
			if (s[i] == '1') b1++;
		}
		int b2 = 0;
		long long int temp = n;
		while (temp > 0)
		{
			int d = temp % 10;
			string s2 = bin(d);
			for (char c : s2) if (c == '1') b2++;
			temp /= 10;
		}
		cout << b1 << " " << b2 << '\n';
	}
}

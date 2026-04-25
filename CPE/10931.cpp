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
	int n;
	while (cin >> n)
	{
		if (n == 0) break;
		cout << "The parity of ";
		string s = bin(n);
		cout << s << " is ";
		int sum = 0;
		for (char c : s) 
		{
			if (c == '1') sum++;
		}
		cout << sum << " (mod 2).\n";
	}
}

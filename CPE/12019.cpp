#include <bits/stdc++.h>
using namespace std;
int main()
{
	int month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	string s[7] = {"Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t; cin >> t;
	int base = 124;
	while (t--)
	{
		int m, d; cin >> m >> d;
		int day = 0;
		for (int i = 0; i < m - 1; i++) day += month[i];
		day += d;
		cout << s[(day - 1) % 7] << '\n';
	} 
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	string s; 
	while (getline(cin, s))
	{
		long long int sum = 0;
		int mx = 1;
		int temp;
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] >= '0' and s[i] <= '9') temp = s[i] - '0';
			else if (s[i] >= 'A' and s[i] <= 'Z') temp = s[i] - 'A' + 10;
			else if (s[i] >= 'a' and s[i] <= 'z') temp = s[i] - 'a' + 36;
			else continue;
			mx = max(temp, mx);
			sum += temp;
		}
		bool found = false;
		for (int i = mx; i < 62; i++)
		{
			if (!(sum % i))
			{
				cout << i + 1 << '\n';
				found = true;
				break;
			}
		}
		if (!found) cout << "such number is impossible!\n";
	}
	
}

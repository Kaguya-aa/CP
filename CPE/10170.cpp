#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	long long int s, d; 
	
	while (cin >> s >> d)
	{
		while (d > s)
		{
			d -= s;
			s++;
		}
		cout << s << '\n';
	}
}

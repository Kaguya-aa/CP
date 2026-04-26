#include <bits/stdc++.h>
using namespace std;
unsigned long  gcd(unsigned long a, unsigned long b)
{
	if (b == 0) return a;
	return gcd(b, a % b);
} 
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n; cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cout << "Pair #" << i << ": ";
		string s1, s2; cin >> s1 >> s2;
		unsigned long dec1 = bitset<31>(s1).to_ulong();
		unsigned long dec2 = bitset<31>(s2).to_ulong();
		if (gcd(dec1, dec2) > 1) cout << "All you need is love!\n";
		else cout << "Love is not all you need!\n";
	}
}

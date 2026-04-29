#include <bits/stdc++.h>
using namespace std;
int n, k;
bool cmp(int a, int b)
{
	int moda = a % k;
	int modb = b % k;
	if (moda != modb) return modb > moda;
	bool aa = abs(a % 2) != 0; // true : 奇 ? false : 偶 
	bool bb = abs(b % 2) != 0;
	if (aa != bb) return aa;
	if (aa) return a > b;
	return b > a;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	while (cin >> n >> k)
	{
		cout << n << " " << k << '\n';
		if (n == 0 and k == 0) break;
		vector<int> a(n);
		for (int i = 0; i < n; i++) cin >> a[i];
		sort(a.begin(), a.end(), cmp);
		for (int i = 0; i < n; i++) cout << a[i] << '\n';
	}
}

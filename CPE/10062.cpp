#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int, int> x, pair<int, int> y) 
{
  
    if (x.second != y.second)
    {
        return x.second < y.second;
    }
    return x.first > y.first;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	string s;
	int c = 1;
	while (getline(cin, s))
	{
		if (c > 1) cout <<  '\n';
		vector<pair<int, int>> a(128); // index num
		for (int i = 0; i < 128; i++) 
		{
			a[i].first = i;
			a[i].second = 0;
		}
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] >= 32 and s[i] <= 127) a[(int)s[i]].second++;
		}
		sort(a.begin(), a.end(), cmp);
		for (int i = 0; i < 128; i++)
		{
			if (a[i].second > 0) cout << a[i].first << " " << a[i].second << '\n';
		}
		c++;
	}
}

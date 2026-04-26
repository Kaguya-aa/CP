#include <bits/stdc++.h>
using namespace std;
int get_degree(string n) 
{
    if (n == "9") return 1;
    int sum = 0;
    for (char c : n) 
    {
        sum += c - '0';
    }
    if (sum == 9) return 1;
    return 1 + get_degree(to_string(sum));
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	string s;
	while (cin >> s)
	{
		if (s == "0") break;
		int sum = 0;
		for (int i = 0; i < s.size(); i++) sum += s[i] - '0';
		if (sum % 9 == 0)
		{
			cout << s << " is a multiple of 9 and has 9-degree ";
			cout <<  get_degree(s) << ".\n"; 
		}
		else 
		{
			cout << s << " is not a multiple of 9.\n";
		}
	}
}

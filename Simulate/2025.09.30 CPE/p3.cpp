#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t; cin >> t;
	cin.ignore();
	while (t--)
	{
		string s; getline(cin, s);
		
		stack<char> st;
		for (char c : s)
		{
			if (c == ')' and !st.empty() and st.top() == '(') st.pop();
			else if (c == ']' and !st.empty() and st.top() == '[') st.pop();
			else st.push(c);
		}
		if (st.empty()) cout << "Yes\n";
		else cout << "No\n";
	}
}

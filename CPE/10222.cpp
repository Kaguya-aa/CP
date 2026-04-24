#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    string a = "1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
    string s; getline(cin, s);
    for (char c : s) 
    {
        if (c == ' ') 
        {
            cout << ' ';
            continue;
        }
            
          char x = (char)tolower(c);
          size_t pos = a.find(x);
          if (pos != string::npos && pos >= 2) cout << a[pos - 2];
          else cout << c;
	}
    cout << '\n';
}

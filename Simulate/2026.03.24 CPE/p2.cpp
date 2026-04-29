#include <bits/stdc++.h>
using namespace std;
vector<vector<char>> g;
int m, n; 
int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
bool py(int x, int y, string s) 
{
    int l = s.size();
    for (int i = 0; i < 8; i++) 
    {
        bool ok = true;
        for (int j = 0; j < l; j++) 
        {
            int nx = x + dx[i] * j;
            int ny = y + dy[i] * j;
            if (nx < 0 or nx >= m or ny < 0 or ny >= n or g[nx][ny] != s[j]) {
                ok = false;
                break;
            }
        }
        if (ok) return true;
    }
    return false;
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    string s;
    getline(cin, s); 

    while (t--) 
    {
        cin >> m >> n;
        g.assign(m, vector<char>(n));
        for (int i = 0; i < m; i++) 
        {
            for (int j = 0; j < n; j++) 
            {
                cin >> g[i][j];
                g[i][j] = (char)toupper(g[i][j]);
            }
        }
        int q;
        cin >> q;
        while (q--) 
        {
            string w;
            cin >> w;
            for (char &c : w) c = (char)toupper(c);
            
            bool found = false;
            for (int i = 0; i < m && !found; i++) 
            {
                for (int j = 0; j < n && !found; j++) 
                {
                    if (g[i][j] == w[0]) 
                    {
                        if (py(i, j, w))
                    	{
                    		found = true;
                            cout << i + 1 << " " << j + 1 << '\n';
                        }
                    }
                }
            }
        }
        if (t > 0) cout << '\n'; 
    }
}

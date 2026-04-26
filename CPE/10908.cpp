#include <bits/stdc++.h>
using namespace std;
int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while (t--) 
    {
        int n, m, q; cin >> n >> m >> q;
        cout << n << " " << m << " " << q << "\n";

        vector<vector<char>> g(n, vector<char>(m));
        for (int i = 0; i < n; i++) 
        {
            for (int j = 0; j < m; j++) 
            {
                cin >> g[i][j];
            }
        }

        while (q--) 
        {
            int x, y;
            cin >> x >> y;
            char target = g[x][y];
            int r = 0;

            while (true) 
            {
                int nr = r + 1;
                if (x - nr < 0 or x + nr >= n or y - nr < 0 or y + nr >= m) break;

                bool ok = true;
                for (int i = x - nr; i <= x + nr; i++) 
                {
                    if (g[i][y - nr] != target or g[i][y + nr] != target) 
                    {
                        ok = false;
                        break;
                    }
                }
                if (!ok) break;

                
                for (int j = y - nr; j <= y + nr; j++) 
            {
                    if (g[x - nr][j] != target || g[x + nr][j] != target) 
                    {
                        ok = false;
                        break;
                    }
                }
                if (!ok) break;
                r++;
            }
            cout << 2 * r + 1 << "\n";
        }
    }
}

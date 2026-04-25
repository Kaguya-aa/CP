#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int c[10]={0,1,1,1,0,0,1,1,1,1};
    int d[10]={0,1,1,1,0,0,1,1,1,0};
    int e[10]={0,1,1,1,0,0,1,1,0,0};
    int f[10]={0,1,1,1,0,0,1,0,0,0};
    int g[10]={0,1,1,1,0,0,0,0,0,0};
    int a[10]={0,1,1,0,0,0,0,0,0,0};
    int b[10]={0,1,0,0,0,0,0,0,0,0};
    int C[10]={0,0,1,0,0,0,0,0,0,0};
    int D[10]={1,1,1,1,0,0,1,1,1,0};
    int E[10]={1,1,1,1,0,0,1,1,0,0};
    int F[10]={1,1,1,1,0,0,1,0,0,0};
    int G[10]={1,1,1,1,0,0,0,0,0,0};
    int A[10]={1,1,1,0,0,0,0,0,0,0};
    int B[10]={1,1,0,0,0,0,0,0,0,0};
    
    int n; cin >> n;
    cin.ignore();
    while (n--)
    {
        int count[10] = {0};
        bool now[10] = {false};
        string s; getline(cin, s);
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'c')
            {
                for (int j = 0; j < 10; j++)
                {
                    if (c[j] == 1 && !now[j]) { now[j] = true; count[j]++; }
                    else if (c[j] == 0) now[j] = false;
                }
            }
            else if (s[i] == 'd')
            {
                for (int j = 0; j < 10; j++)
                {
                    if (d[j] == 1 && !now[j]) { now[j] = true; count[j]++; }
                    else if (d[j] == 0) now[j] = false;
                }
            }
            else if (s[i] == 'e')
            {
                for (int j = 0; j < 10; j++)
                {
                    if (e[j] == 1 && !now[j]) { now[j] = true; count[j]++; }
                    else if (e[j] == 0) now[j] = false;
                }
            }
            else if (s[i] == 'f')
            {
                for (int j = 0; j < 10; j++)
                {
                    if (f[j] == 1 && !now[j]) { now[j] = true; count[j]++; } // 修正 f[j]
                    else if (f[j] == 0) now[j] = false;
                }
            }
            else if (s[i] == 'g')
            {
                for (int j = 0; j < 10; j++)
                {
                    if (g[j] == 1 && !now[j]) { now[j] = true; count[j]++; }
                    else if (g[j] == 0) now[j] = false;
                }
            }
            else if (s[i] == 'a')
            {
                for (int j = 0; j < 10; j++)
                {
                    if (a[j] == 1 && !now[j]) { now[j] = true; count[j]++; }
                    else if (a[j] == 0) now[j] = false; // 修正 a[j]
                }
            }
            else if (s[i] == 'b')
            {
                for (int j = 0; j < 10; j++)
                {
                    if (b[j] == 1 && !now[j]) { now[j] = true; count[j]++; }
                    else if (b[j] == 0) now[j] = false;
                }
            }
            else if (s[i] == 'C')
            {
                for (int j = 0; j < 10; j++)
                {
                    if (C[j] == 1 && !now[j]) { now[j] = true; count[j]++; }
                    else if (C[j] == 0) now[j] = false;
                }
            }
            else if (s[i] == 'D')
            {
                for (int j = 0; j < 10; j++)
                {
                    if (D[j] == 1 && !now[j]) { now[j] = true; count[j]++; }
                    else if (D[j] == 0) now[j] = false;
                }
            }
            else if (s[i] == 'E')
            {
                for (int j = 0; j < 10; j++)
                {
                    if (E[j] == 1 && !now[j]) { now[j] = true; count[j]++; }
                    else if (E[j] == 0) now[j] = false;
                }
            }
            else if (s[i] == 'F')
            {
                for (int j = 0; j < 10; j++)
                {
                    if (F[j] == 1 && !now[j]) { now[j] = true; count[j]++; }
                    else if (F[j] == 0) now[j] = false;
                }
            }
            else if (s[i] == 'G')
            {
                for (int j = 0; j < 10; j++)
                {
                    if (G[j] == 1 && !now[j]) { now[j] = true; count[j]++; }
                    else if (G[j] == 0) now[j] = false;
                }
            }
            else if (s[i] == 'A')
            {
                for (int j = 0; j < 10; j++)
                {
                    if (A[j] == 1 && !now[j]) { now[j] = true; count[j]++; }
                    else if (A[j] == 0) now[j] = false;
                }
            }
            else if (s[i] == 'B')
            {
                for (int j = 0; j < 10; j++)
                {
                    if (B[j] == 1 && !now[j]) { now[j] = true; count[j]++; }
                    else if (B[j] == 0) now[j] = false;
                }
            }
        }
        for (int i = 0; i < 10; i++) {
            cout << count[i] << (i == 9 ? "" : " ");
        }
        cout << '\n';
    }
}

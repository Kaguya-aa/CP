#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, c = 1;
    while (cin >> n)
    {
        vector<int> a(n);
        bool py = false;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i]; 
            if (a[i] < 1) py = true;
            if (i > 0 && a[i] <= a[i - 1]) py = true;
        }

        cout << "Case #" << c << ": ";

        if (py) 
        {
            cout << "It is not a B2-Sequence.\n" << endl;
        } 
        else 
        {
            vector<int> b(20005, 0); 
            bool duplicate = false;
            for (int i = 0; i < n; i++) 
            {
                for (int j = i; j < n; j++) 
                {
                    int sum = a[i] + a[j];
                    if (sum > 20000 || b[sum]) 
                    {
                        duplicate = true;
                        break;
                    }
                    b[sum] = 1;
                }
                if (duplicate) break;
            }
            if (!duplicate) cout << "It is a B2-Sequence.\n" << endl;
            else cout << "It is not a B2-Sequence.\n" << endl;
        }
        c++;
    }
}

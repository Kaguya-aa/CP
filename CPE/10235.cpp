#include <bits/stdc++.h>
using namespace std;
bool prime(long long int n)
{
    if (n < 2) return true; 
    for (long long int i = 2; i * i <= n; i++)
    {
        if (n % i == 0) return true;
    }	
    return false;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long int n;
    while (cin >> n)
    {
        if (prime(n))  cout << n << " is not prime.\n";
        else
        {
            string sn = to_string(n);
            string s = "";
            for (int i = sn.size() - 1; i >= 0; i--) s += sn[i];
            long long int ww = stoll(s);
            if (n != ww && !prime(ww)) 
            {
                cout << n << " is emirp.\n";
            }
            else 
            {
                cout << n << " is prime.\n";
            }
        }
    }
}

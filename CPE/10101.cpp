#include <bits/stdc++.h>
using namespace std;
void check(long long int n) 
{
    if (n >= 10000000) 
    {
        check(n / 10000000); 
        cout << " kuti";
        n %= 10000000;
    }
    if (n >= 100000) 
    {
        cout << " " << n / 100000 << " lakh";
        n %= 100000;
    }
    if (n >= 1000) 
    {
        cout << " " << n / 1000 << " hajar"; 
        n %= 1000;
    }
    if (n >= 100) 
    {
        cout << " " << n / 100 << " shata"; 
        n %= 100;
    }
    if (n > 0) 
    {
        cout << " " << n;
    }
}

int main() 
{
    long long int n;
    int c = 1;
    while (cin >> n) 
    {
        if (1 <= c and c <= 9) cout << "   " << c << ".";
        else if (10 <= c and c <= 99) cout << "  " << c << ".";
        else if (100 <= c and c <= 999) cout << " " << c << ".";
        else if (1000 <= c and c <= 9999) cout << c << ".";
        if (n == 0) 
        {
            cout << " 0";
        } 
        else 
        {
            check(n);
        }
        cout << "\n";
        c++;
    }
}

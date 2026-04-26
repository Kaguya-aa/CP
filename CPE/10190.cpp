 #include <bits/stdc++.h>
 using namespace std;
 int main()
 {
 	ios::sync_with_stdio(false);
 	cin.tie(0);
 	long long int n, m; 
 	while (cin >> n >> m)
 	{
 		if (m < 2 or n < 2 or n < m) 
 		{
 			cout << "Boring!\n";
 			continue;	
 		}
 		vector<long long int> a;
 		a.emplace_back(n);
 		
 		bool py = false;
 		while (true)
 		{
 			if (n == 1) break;
 			if (n % m != 0)
 			{
 				py = true;
 				break;
 			}
 			a.emplace_back(n / m);
 			n /= m;
 		}
 		if (py) cout << "Boring!";
 		else 
 		{
 			for (int i = 0; i < a.size(); i++)
 			{
 				if (i == a.size() - 1) cout << a[i];
 				else cout << a[i] << " ";
 			}
 		}
 		cout << '\n';
 	}
 }

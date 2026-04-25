#include <bits/stdc++.h>
using namespace std;
struct dise
{
	int top, back, north, south, east, west; //東 西
};
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	while (cin >> n)
	{
		if (n == 0) break;
		dise a = {1, 6, 2, 5, 4, 3};
		while (n--)
		{
			dise b = a;
			string cmd; cin >> cmd;
			if (cmd == "north")
			{
				b.top = a.south;
				b.north = a.top;
				b.back = a.north;
				b.south = a.back;
				b.east = a.east;
				b.west = a.west;
			}
			else if (cmd == "south")
			{
				b.top = a.north;
				b.north = a.back;
				b.back = a.south;
				b.south = a.top;
				b.east = a.east;
				b.west = a.west;
			}
			else if (cmd == "east")
			{
				b.top = a.west;
				b.north = a.north;
				b.back = a.east;
				b.south = a.south;
				b.east = a.top;
				b.west = a.back;
			} 			
			else if (cmd == "west")
			{
				b.top = a.east;
				b.north = a.north;
				b.back = a.west;
				b.south = a.south;
				b.east = a.back;
				b.west = a.top;
			}
			a = b;
		}
		cout << a.top << '\n';
	}
}

#include <bits/stdc++.h>
using namespace std;
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};
char dir_map[4] = {'N', 'E', 'S', 'W'};
bool scent[55][55];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n, r; cin >> n >> r;

	int x, y;
	char f;
	while (cin >> x >> y >> f)
	{
		int c;
		if (f == 'N') c = 0;
		else if (f == 'E') c = 1;
		else if (f == 'S') c = 2;
		else if (f == 'W') c = 3;
		string cmd; cin >> cmd;
		bool lost = false;
		for (int i = 0; i < cmd.size(); i++)
		{
			if (cmd[i] == 'R') 
			{
				c = (c + 1) % 4;
			}
			else if (cmd[i] == 'L') 
			{
				c = (c + 3) % 4; 
			}
			else if (cmd[i] == 'F') 
			{
				int nx = x + dx[c];
				int ny = y + dy[c];

				if (nx < 0 or nx > n or ny < 0 or ny > r)
				{
					if (!scent[x][y]) 
					{
						scent[x][y] = true;
						lost = true;
						break;
					}	
				}
				else 
				{
					x = nx;
					y = ny;	
				}
			}
		}

		cout << x << " " << y << " " << dir_map[c];
		if (lost) cout << " LOST";
		cout << "\n";
	}
}

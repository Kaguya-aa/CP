#include <bits/stdc++.h>
const double PI = acos(-1.0);
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	double s, a;
	string py;
	while (cin >> s >> a >> py)
	{
		double r = 6440.0 + s;
		if (py == "min") a /= 60.0;
		if (a > 360.0) a = fmod(a, 360.0);
		if (a > 180.0) a = 360.0 - a;
		double rad = a * PI / 180.0;
		double arc = r * rad;
		double chord = 2.0 * r * sin(rad / 2.0);
		cout << fixed << setprecision(6) << arc << " " << chord << '\n';
	}
}

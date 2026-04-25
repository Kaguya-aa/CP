#include <bits/stdc++.h>
using namespace std;
int main() 
{
    double x1, y1, x2, y2, x3, y3, x4, y4;
    double targetX, targetY, commonX, commonY, other1X, other1Y, other2X, other2Y;

    while (cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4) 
    {
        if (x1 == x3 && y1 == y3) 
        {
            commonX = x1; commonY = y1;
            other1X = x2; other1Y = y2;
            other2X = x4; other2Y = y4;
        } 
        else if (x1 == x4 && y1 == y4) 
        {
            commonX = x1; commonY = y1;
            other1X = x2; other1Y = y2;
            other2X = x3; other2Y = y3;
        } 
        else if (x2 == x3 && y2 == y3) 
        {
            commonX = x2; commonY = y2;
            other1X = x1; other1Y = y1;
            other2X = x4; other2Y = y4;
        } 
        else 
        { 
            commonX = x2; commonY = y2;
            other1X = x1; other1Y = y1;
            other2X = x3; other2Y = y3;
        }

      
        targetX = (other1X + other2X) - commonX;
        targetY = (other1Y + other2Y) - commonY;

        cout << fixed << setprecision(3) << targetX << " " << targetY << endl;
    }
}

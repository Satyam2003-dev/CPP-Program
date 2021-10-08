#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int x, y, xr, yr, d, z, m, a, min;
        cin >> x >> y >> xr >> yr >> d;
        z = x - xr * d;
        m = y - yr * d;
        if (z < 0 || m < 0)
            cout << "NO"<<endl;
        else
            cout << "YES"<<endl;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, a, b;
        cin >> n >> a >> b;
        char ch[101];
        ll s = 0, ar = 0;
       // cin >> ch;
        for (ll i = 0; i < n; i++)
        {
            cin >> ch;
            if (ch[0] == 'E' || ch[0] == 'Q' || ch[0] == 'U' || ch[0] == 'I' || ch[0] == 'N' || ch[0] == 'O' || ch[0] == 'X')
                s += a;
            else
                ar += b;
        }
        if (s > ar)
            cout << "SARTHAK" << endl;
        else if (s == ar)
            cout << "DRAW" << endl;
        else
            cout << "ANURADHA" << endl;
    }
}
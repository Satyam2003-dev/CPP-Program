#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll j = 0, n, k, ans = 0;
    cin >> n >> k;

    while (n--)
    {
        cin >> j;
        if (j % k == 0)
        {
            ans++;
        }
    }
    cout << ans;

    return 0;
}
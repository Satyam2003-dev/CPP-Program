#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int x, y;
        cin >> x >> y;
        char ch[m];
        int f = 0, u = 0, p = 0;
        int ans[n];
        for (int i = 0; i < n; i++)
        {
            f = 0, u = 0, p = 0;
            for (int j = 0; j < m; j++)
            {
                cin >> ch[j];
                if (ch[j] == 'F')
                    f++;
                else if (ch[j] == 'P')
                    p++;
                else if (ch[j] == 'U')
                    u++;
            }
            
            if (f >= x || (f == (x - 1) && p >= y))
                ans[i]=1;  
            else
                ans[i]=0;
        }
        for(int i=0;i<n;i++)
        {
            cout<<ans[i];
        }
        cout<<"\n";
    }
}
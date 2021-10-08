#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i, j, temp = 0;
        int s1r = -1, s1c = -1;
        int s2r = -1, s2c = -1;
        cin >> n;
        char arr[n][n];
        for (i = 0; i < n; i += 1)
        {
            for (j = 0; j < n; j += 1)
            {
                cin >> arr[i][j];
            }
        }
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                if (arr[i][j] == '*')
                {
                    s1r = i;
                    s1c = j;
                    temp = 100;
                }
                if (temp == 100)
                {
                    if (arr[i][j] == '*')
                    {
                        s2r = i;
                        s2c = j;
                    }
                }
            }
        }
        if(s1c==s2r && s1r==s2c)
        {
            arr[s1r][s2c]='*';
            arr[s2r][s1c]='*';
            for(i=0;i<n;i++)
            {
                for(j=0;j<n;j++)
                {
                    cout<<arr[i][j];
                }
                cout<<endl;
            }
            
        }
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int count;
    for (int i = 0; i < n; i++)
    {
        count = 0;
        for (int j = 0; j < arr[i].size(); j++)
        {
            if (arr[i][j] == '4')
            {
                count++;
            }
        }
        cout << count << "\n";
    }
    return 0;
}

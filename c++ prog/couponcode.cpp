#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int a, b, c, d, e, f, sum, coup, wicoup, de, o1, o2;
        cin >> de >> coup;
        cin >> a >> b >> c;
        cin >> d >> e >> f;
        if (a + b + c >= 150 && d + e + f >= 150)
        {
            sum = a + b + c + d + e + f + coup;
        }
        else if ((a + b + c < 150 && d + e + f >= 150) || (a + b + c >= 150) && (d + e + f < 150))
        {
            sum = a + b + c + d + e + f + coup + de;
        }
        else if (a + b + c < 150 && d + e + f < 150)
        {
            sum = a + b + c + d + e + f + coup + (2 * de);
        }
        wicoup = a + b + c + d + e + f + (2 * de);
        if (sum < wicoup)
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
    return 0;
}

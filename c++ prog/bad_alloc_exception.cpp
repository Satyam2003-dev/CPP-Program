#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int d, dd, a, b, c;
        cin >> d >> dd >> a >> b >> c;
        int xx = d * dd;

        if (xx < 10)
            cout << 0 << endl;

        else if (xx  >= 10 && xx < 21)
            cout<< a << endl;
        else if (xx  >= 21 && xx < 42)
            cout << b << endl;
        else
            cout << c << endl;
    }
    return 0;
}
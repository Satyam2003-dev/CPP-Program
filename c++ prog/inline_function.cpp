#include <iostream>
using namespace std;
#define MAX(a, b, c) (a > b && a > c ? a : (b > c ? b : c))
#define MIN(a, b, c) (a < b && a < c ? a : (b < c ? b : c))
int main(void)
{
    int x, y, z, large, small;
    cout << "enter three number " << endl;
    cin >> x >> y >> z;
    large = MAX(x, y, z);
    small = MIN(x, y, z);
    cout << "MAX between  x, y, z = " << large << endl;
    cout << "MIN between  x, y, z = " << small << endl;
    return 0;
}
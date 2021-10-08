#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n, first, last, sum, digits, num, a, b;
    cout << " Find the number after swapping the first and last digits:\n";
    cout << "-------------------------------------------------------------\n";
    cout << "\nInput any number: ";
    cin >> n;
    digits = (int)log10(n);
    first = n / pow(10, digits);
    last = n % 10;
    a = first * (pow(10, digits));
    b = n % a;
    n = b / 10;
    num = last * (pow(10, digits)) + (n * 10 + first);
    cout << "\nThe number after swaping the first and last digits are:\t" << num << endl;
}

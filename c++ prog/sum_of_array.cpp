#include<iostream>
using namespace std;
int main ()
{
    int arr[20], n, i, sum = 0, product = 1;
    cout << "Enter the size of the array : ";
    cin >> n;
    cout << "\nEnter the elements of the array : ";
    for (i = 0; i < n; i++)
    cin >> arr[i];
    for (i = 0; i < n; i++)
    {
        sum += arr[i];
        product *= arr[i];
    }
    cout << "Sum of array elements =  " <<sum <<endl;
    cout << "Product of array elements =  " <<product;
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int farenheit,celcius;
    cout<<"Enter temperature in celcius"<<endl;
    cin>>celcius;

    farenheit = ((celcius*9)/5)+32;
    cout<<"temperature in farenheit is "<<farenheit<<endl;
    return 0;
}

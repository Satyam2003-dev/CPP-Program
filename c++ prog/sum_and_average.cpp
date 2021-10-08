#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,e,sum,avg;
    cout<<"Enter 5 number"<<endl;
    cin>>a>>b>>c>>d>>e;
    sum=a+b+c+d+e;
    avg=sum/5;
    cout<<"Sum ="<<sum<<endl;
    cout<<"average ="<<avg;
    return 0;
}
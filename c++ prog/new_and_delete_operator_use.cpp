#include<iostream>
using namespace std;
int main()
{
    int *arr;
    int size;
    cout<<"enter size of an array"<<endl;
    cin>>size;

    cout<<"creating an array of size "<< size <<"  "<<endl;
    arr = new int[size];
    cout<<"dynamic allocation of memory for array is successful."<<endl;
    delete arr;
    return 0;
}

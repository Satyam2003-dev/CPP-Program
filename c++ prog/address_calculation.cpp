#include<iostream>
using namespace std;
int main()
{
int b,i,j,w,lr=0,lc=0,n,m;
int a[10][10];
cout<<"enter the number of rows"<<endl;
cin>>m;
cout<<"enter the number of column"<<endl;
cin>>n;
cout<<"enter the element in matrix"<<endl;
for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    {
        cin>>a[i][j];
    }
}
cout<<"enter the base address"<<endl;
cin>>b;
cout<<"enter the storage size of one element in array"<<endl;
cin>>w;
i=m-1;
j=n-1;
cout<<"address of a[i][j] ="<< b+w*(n*(i-lr)+(j-lc));
return 0;
}



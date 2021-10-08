#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int s=0; s<n; s++)
    {
        string x,a,c,b;

        cin>>x;
        int l= x.length();
        if(l%2==0)
        {
            b= x.substr(l/2);
            a= x.substr(0, l/2);
            ;
        }
        else
        {   c= x.substr(l/2);
            b= c.substr(1);
            a= x.substr(0, l/2);
        }
 sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        if(a == b )
            cout<<"YES"<<endl;
        else
            cout <<"NO"<<endl;
    }
    return 0;
}
#include<iostream>
using namespace std;
class area
{
  int a,l,b;
  public:
  area() // simple constructor definition.
  {
     l=5;
     b=6;
     cout<<"Simple constructor called\n";
     cout<<"length="<<l<<"\nbreadth="<<b<<endl;
  }
  area(int x,int y) // parameterised constructor
  {
     l=x;
     b=y;
  }
  void calc();
  void print();
  ~area();
};
void area::calc()
{
   a=l*b;
}
void area::print()
{
   cout<<"Area is : "<<a<<endl;
}
area::~area()
{
cout << "Object is being deleted" << endl;
}
int main()
{
   int l,b;
   area a1; // simple constructor is called.
   a1.calc();
   a1.print();
   cout<<"Enter length and breadth for parameterised        constructor:\n";
   cin>>l>>b;
   area a2(l,b); // parameterised constructor is called.
   a2.calc();
   a2.print();
   return 0;
}

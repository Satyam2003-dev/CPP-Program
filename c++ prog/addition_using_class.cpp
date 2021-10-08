#include<iostream>
using namespace std;

class cal
{
public:
    void input()
    {
        int a, b;

        cout << "enter the no ";
        cin >> a >> b;
    }
};

class add : public cal

{

public:
    void add1()
    {
        int a, b;
        cout << "addition is " << a + b;
    }
};

main()

{

    add a1;
    a1.input();
    a1.add1();
}
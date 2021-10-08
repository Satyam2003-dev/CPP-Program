#include <iostream>
using namespace std;
class student
{
private:
    string name;
    int roll_no;
    int height;
    int weight;

public:
    student(string n, int r, int h, int w)
    {
        name = n;
        roll_no = r;
        height = h;
        weight = w;
    }
    void display(void);
    ~student();
};
void student ::display(void)
{
    cout << "student details" << endl;
    cout << "Name:" << name << ", Roll no" << roll_no << ", height" << height << ",weight"
         << ",weight";
}
student ::~student()
{
    cout << "destructor";
}
int main()
{
    student std("varun", 1234, 5, 67);
    student std1 = std;
    std1.display();
    return 0;
}
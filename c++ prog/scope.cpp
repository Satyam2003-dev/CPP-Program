#include <iostream>
using namespace std;

int my_variable = 10;  // Global variable my_variable

int main()
{
  int my_variable = 100; // Local variable my_variable

  cout << "Value of global my_variable is " << ::my_variable << endl;
  cout << "Value of local my_variable is " << my_variable << endl;

  return 0;
}
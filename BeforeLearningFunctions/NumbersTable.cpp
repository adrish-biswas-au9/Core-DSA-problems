#include <iostream>
using namespace std;

int main()
{
  cout << "Enter the number whose table needs to be printed:\n";
  int number;
  cin >> number;
  for (int i = 1; i <= 10; i++)
  {
    cout << number << " * " << i << " = " << (number * i) << "\n";
  }
  return 0;
}
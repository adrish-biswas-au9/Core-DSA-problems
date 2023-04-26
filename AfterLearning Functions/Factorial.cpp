#include <iostream>
using namespace std;

int factorial(int number)
{
  int factorial = 1;
  for (int i = 1; i <= number; i++)
  {
    factorial *= i;
  }
  return factorial;
}

int main()
{
  cout << "Enter the number whose Factorial needs to be found out\n";
  int number;
  cin >> number;
  cout << "Factorial of " << number << " is " << factorial(number) << "\n";
  return 0;
}
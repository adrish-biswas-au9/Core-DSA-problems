#include <iostream>
using namespace std;

int add(int number1, int number2)
{
  return number1 + number2;
}

int add(int number1, int number2, int number3)
{
  return number1 + number2 + number3;
}

int main()
{
  cout << "Enter two numbers to be added:\n";
  int number1, number2;
  cin >> number1 >> number2;
  cout << "Enter three numbers to be added:\n";
  int num1, num2, num3;
  cin >> num1 >> num2 >> num3;
  cout << "Sum of the first two numbers: " << add(number1, number2) << "\n";
  cout << "Sum of the three numbers " << add(num1, num2, num3) << "\n";
  return 0;
}
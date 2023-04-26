#include <iostream>
using namespace std;

int main()
{
  cout << "Enter the number to be reversed\n";
  int number;
  cin >> number;
  int reverse = 0;
  int digit;
  while (number)
  {
    digit = number % 10;
    reverse = reverse * 10 + digit;
    number = number / 10;
  }
  cout << reverse << "\n";
  return 0;
}
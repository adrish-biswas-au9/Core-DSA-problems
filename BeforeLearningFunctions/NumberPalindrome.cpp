#include <iostream>
using namespace std;

int main()
{
  cout << "Enter the number to be checked\n";
  int number;
  cin >> number;
  int number_copy = number;
  int reverse = 0;
  int digit;
  while (number)
  {
    digit = number % 10;
    reverse = reverse * 10 + digit;
    number = number / 10;
  }
  if (reverse == number_copy)
    cout << "Palindrome\n";
  else
    cout << "Not a Palindrome\n";
  return 0;
}
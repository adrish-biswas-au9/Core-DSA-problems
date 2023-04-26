#include <iostream>
using namespace std;

int main()
{
  cout << "Enter the number to be checked:\n";
  int number;
  cin >> number;
  int number_of_digits = 1;
  for (int i = 10;; i = i * 10)
  {
    if (number / i == 0)
    {
      cout << "Number of digits is " << number_of_digits << "\n";
      return 0;
    }
    number_of_digits++;
  }
  return 0;
}
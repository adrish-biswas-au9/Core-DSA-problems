#include <iostream>
using namespace std;

int main()
{
  cout << "Enter the number to be chceked:\n";
  int number;
  cin >> number;
  // int number_of_digits = 1;
  int number_of_digits = 0;
  while (number)
  {
    number_of_digits++;
    number = number / 10;
    // if (number != 0)
    //   number_of_digits++;
  }
  cout << "Number of digits is: " << number_of_digits << "\n";
  return 0;
}
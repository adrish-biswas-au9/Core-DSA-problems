#include <iostream>
// #include <math.h>
using namespace std;

int main()
{
  cout << "Enter the Decimal number whose Binary we need to find\n";
  int number;
  cin >> number;

  long long digit;
  long long binary = 0;
  long long multiplier = 1;
  // int tens_power = 0;
  while (number)
  {
    digit = number % 2;
    binary += digit * multiplier;
    multiplier *= 10;
    // binary = digit * pow(10, tens_power) + binary;
    // tens_power++;
    number = number / 2;
  }
  cout << binary << "\n";
  return 0;
}
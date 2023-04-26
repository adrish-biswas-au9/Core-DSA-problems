#include <iostream>
// #include <math.h>
using namespace std;

int main()
{
  cout << "Enter the Binary whose Decimal needs to be found:\n";
  int binary;
  cin >> binary;
  int digit;
  int decimal = 0;
  // int twos_power = 0;
  int multiplier = 1;
  while (binary)
  {
    digit = binary % 10;
    decimal += digit * multiplier;
    multiplier *= 2;
    // decimal = decimal + digit * pow(2, twos_power);
    // twos_power++;
    binary = binary / 10;
  }
  cout << decimal << "\n";
  return 0;
}
#include <iostream>
using namespace std;

int main()
{
  cout << "Enter the Binary number whose One's Complement is needed to be printed:\n";
  int binary;
  cin >> binary;
  if (!binary)
    cout << 1 << "\n";
  int ones_complement = 0;
  int digit;
  while (binary)
  {
    digit = binary % 10;
    ones_complement += (digit ^ 1) * 10;
    binary /= 10;
  }
  cout << ones_complement << "\n";
  return 0;
}
#include <iostream>
using namespace std;
int main()
{
  int n = 34;
  if (n % 2 == 0)
  {
    cout << "Even\n";
  }
  else
  {
    cout << "Odd\n";
  }
  n = 0;
  if (n > 0)
  {
    cout << "Positive\n";
  }
  else if (n < 0)
  {
    cout << "Negatiev\n";
  }
  else
  {
    cout << "Zero\n";
  }

  int a = 200, b = 100, c = 90;
  if (a > b && a > c)
  {
    cout << a << "\n";
  }
  else if (b > a && b > c)
  {
    cout << b << "\n";
  }
  else
  {
    cout << c << "\n";
  }
  return 0;
}
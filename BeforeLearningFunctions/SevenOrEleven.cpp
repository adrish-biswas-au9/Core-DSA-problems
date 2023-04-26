#include <iostream>
using namespace std;

int main()
{
  int number = 77;
  if (number % 7 == 0 || number % 11 == 0)
  {
    cout << "Divisible by 7 or 11\n";
  }
  else
  {
    cout << "Not divisible by 7 or 11\n";
  }
  return 0;
}
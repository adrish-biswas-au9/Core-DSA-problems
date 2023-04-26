#include <iostream>
using namespace std;

int main()
{
  cout << "Enter the number which needs to be checked: \n";
  int number;
  cin >> number;
  if (number <= 1)
  {
    cout << "Not prime\n";
    return 0;
  }
  // else
  // {
  int divisor = 2;
  // int flag = 0;
  for (; divisor < number / 2; divisor++)
  {
    if (number % divisor == 0)
    {
      cout << "Not Prime\n";
      return 0;
      // flag = 1;
      // break;
    }
  }
  // if (flag != 1)
  cout << "Prime\n";
  //}
  return 0;
}
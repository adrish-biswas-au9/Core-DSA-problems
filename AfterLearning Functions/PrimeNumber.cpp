#include <iostream>
using namespace std;

bool isPrime(int number)
{
  if (number < 2)
  {
    return false;
  }
  else if (number == 2)
  {
    return true;
  }
  for (int i = 2; i < number; i++)
  {
    if (number % i == 0)
    {
      return false;
    }
  }
  return true;
}

int main()
{
  cout << "Enter a number to be checked:\n";
  int number;
  cin >> number;
  cout << number << (isPrime(number) ? " is " : " is not ")
       << "a Prime number\n";
  return 0;
}
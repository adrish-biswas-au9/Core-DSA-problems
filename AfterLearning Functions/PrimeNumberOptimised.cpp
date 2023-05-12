#include <iostream>
#include <cmath>
using namespace std;

int isPrime(int N)
{
  // https://practice.geeksforgeeks.org/problems/prime-number2314/1
  if (N <= 1)
    return 0;
  for (int i = 2; i <= sqrt(N); i++)
  {
    if (N % i == 0)
      return 0;
  }
  return 1;
}

int main()
{
  cout << "Enter the number which needs to be checked for Prime:\n";
  int number;
  cin >> number;
  if (isPrime(number))
    cout << number << " is a Prime Number\n";
  else
    cout << number << " is not a Prime Number\n";
  return 0;
}
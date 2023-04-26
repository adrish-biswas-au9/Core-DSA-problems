#include <iostream>
using namespace std;

int fibonacciNth(int n = 5)
{
  if (n == 1)
    return 0;
  else if (n == 2)
    return 1;
  int firstValue = 0;
  int secondValue = 1;
  int currentValue;
  for (int i = 3; i <= n; i++)
  {
    currentValue = firstValue + secondValue;
    firstValue = secondValue;
    secondValue = currentValue;
  }
  return currentValue;
}

int main()
{
  cout << "Enter the value of N, such that the Nth value of Fibonacci Series will be printed:\n";
  int n;
  cin >> n;
  cout << fibonacciNth(n) << "\n";
  return 0;
}
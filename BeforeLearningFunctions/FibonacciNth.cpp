#include <iostream>
using namespace std;

int main()
{
  cout << "Enter the N value to print the Nth number in Fibonacci Series:\n";
  int n;
  cin >> n;
  if (n <= 0)
  {
    cout << "Not Possible!"
         << "\n";
    return 0;
  }
  if (n == 1)
  {
    cout << 0 << "\n";
    return 0;
  }
  if (n == 2)
  {
    cout << 1 << "\n";
    return 0;
  }
  int first = 0;
  int second = 1;
  int current;
  for (int i = 3; i <= n; i++)
  {
    current = first + second;
    first = second;
    second = current;
  }
  cout << current << "\n";
  return 0;
}
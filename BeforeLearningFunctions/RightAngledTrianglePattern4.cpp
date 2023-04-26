#include <iostream>
using namespace std;

int main()
{
  cout << "Enter the limit for the Right Angled Triangle to be printed\n";
  int limit;
  cin >> limit;
  for (int i = 1; i <= limit; i++)
  {
    for (int k = 1; k <= i - 1; k++)
    {
      cout << "  ";
    }
    for (int j = limit - i + 1; j >= 1; j--)
    {
      cout << limit + 1 - j << " ";
    }
    cout << "\n";
  }
  return 0;
}
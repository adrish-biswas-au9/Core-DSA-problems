#include <iostream>
using namespace std;

int main()
{
  cout << "Enter the limit for the omnitrix pattern:\n";
  int limit;
  cin >> limit;
  cout << "Enter the character needed to print:\n";
  char character;
  cin >> character;
  for (int i = 1; i <= limit; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << character;
    }
    for (int j = 2 * (limit - i) - 1; j >= 1; j--)
    {
      cout << " ";
    }
    for (int j = 1; j <= i; j++)
    {
      if (j == limit)
      {
        break;
      }
      cout << character;
    }
    cout << "\n";
  }
  for (int i = 1; i <= limit; i++)
  {
    for (int j = limit - i; j >= 1; j--)
    {
      cout << character;
    }
    for (int j = 1; j <= (2 * (i - 1)) + 1; j++)
    {
      cout << " ";
    }
    for (int j = limit - i; j >= 1; j--)
    {
      cout << character;
    }
    cout << "\n";
  }
  return 0;
}
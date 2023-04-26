#include <iostream>
using namespace std;

int main()
{
  cout << "Enter the limit for the Pyramid Pattern which will be printed:\n";
  int limit;
  cin >> limit;
  cout << "Enter the character which needs to be printed:\n";
  char character;
  cin >> character;

  for (int i = 1; i <= limit; i++)
  {
    for (int j = 1; j <= i - 1; j++)
    {
      cout << "  ";
    }
    for (int j = (limit - i) * 2 + 1; j >= 1; j--)
    {
      cout << character << " ";
    }
    cout << "\n";
  }
  return 0;
}
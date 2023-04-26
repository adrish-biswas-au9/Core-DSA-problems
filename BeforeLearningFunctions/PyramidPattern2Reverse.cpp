#include <iostream>
using namespace std;

int main()
{
  cout << "Enter the limit for the Pyramid Pattern which needs to be printed\n";
  int limit;
  cin >> limit;
  cout << "Enter the character which needs to be printed\n";
  char character;
  cin >> character;
  for (int i = 1; i <= limit; i++)
  {
    for (int j = 1; j <= i - 1; j++)
    {
      cout << " ";
    }
    for (int j = limit; j >= i; j--)
    {
      cout << character << " ";
    }
    cout << "\n";
  }
  return 0;
}
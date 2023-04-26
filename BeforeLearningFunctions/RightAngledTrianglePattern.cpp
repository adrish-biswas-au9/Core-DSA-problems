#include <iostream>
using namespace std;

int main()
{
  cout << "Enter the limit for the Right Angled Triangle Pattern to be printed:\n";
  int limit;
  cin >> limit;
  cout << "Enter the character to be printed:\n";
  char character;
  cin >> character;
  for (int i = 1; i <= limit; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << character << " ";
    }
    cout << "\n";
  }
  return 0;
}
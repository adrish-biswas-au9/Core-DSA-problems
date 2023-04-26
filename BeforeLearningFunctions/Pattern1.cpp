#include <iostream>
using namespace std;

int main()
{
  cout << "Give the value of the side of the square which will be printed: \n";
  int side;
  cin >> side;
  cout << "Enter the character which needs to be printed inside the square: \n";
  char character;
  cin >> character;
  for (int i = 1; i <= side; i++)
  {
    for (int j = 1; j <= side; j++)
    {
      cout << " " << character << " ";
    }
    cout << "\n";
  }
  return 0;
}
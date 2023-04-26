#include <iostream>
using namespace std;

int main()
{
  cout << "Enter the side of the square pattern to be printed: \n";
  int side;
  cin >> side;
  for (int i = 1; i <= side; i++)
  {
    for (int j = 1; j <= side; j++)
    {
      cout << side + 1 - j << " ";
    }
    cout << "\n";
  }
  return 0;
}
#include <iostream>
using namespace std;

int main()
{
  cout << "Enter the value of the side to be printed:\n";
  int side;
  cin >> side;
  for (int i = 1; i <= side; i++)
  {
    for (int j = 1; j <= side; j++)
    {
      cout << (char)(96 + i) << " ";
    }
    cout << "\n";
  }
  return 0;
}
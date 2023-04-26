#include <iostream>
using namespace std;

int main()
{
  cout << "Enter the value of the side for the square pattern to be printed:\n";
  int side;
  cin >> side;
  for (int i = 0; i < side; i++)
  {
    for (int j = 1; j <= side; j++)
    {
      cout << side * i + j << " ";
    }
    cout << "\n";
  }
  return 0;
}
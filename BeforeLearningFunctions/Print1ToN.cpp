#include <iostream>
using namespace std;

int main()
{
  cout << "Enter the range:\n";
  int range;
  cin >> range;
  for (int i = 1; i <= range; i++)
  {
    cout << i << " ";
  }
  return 0;
}
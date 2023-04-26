#include <iostream>
using namespace std;

int main()
{
  cout << "Enter the range:\n";
  int range;
  cin >> range;
  int sum = 0;
  for (int i = 1; i <= range; i++)
  {
    sum += i;
  }
  cout << sum << "\n";
  return 0;
}
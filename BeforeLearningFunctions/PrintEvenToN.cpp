#include <iostream>
using namespace std;

int main()
{
  cout << "Enter the range: \n";
  int range;
  cin >> range;
  for (int i = 1; i <= range; i++)
    if (i % 2 == 0)
      cout << i << " ";
  return 0;
}
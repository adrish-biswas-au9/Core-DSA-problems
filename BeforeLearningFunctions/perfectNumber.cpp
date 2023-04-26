#include <iostream>
using namespace std;

int main()
{
  int number = 9;
  if (number % 3 == 0 && number % 5 == 0)
  {
    cout << "Perfect number\n";
  }
  else
  {
    cout << "Not perfect number\n";
  }
  return 0;
}
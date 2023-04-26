#include <iostream>
using namespace std;

int main()
{
  cout << "Enter the limit:\n";
  int limit;
  cin >> limit;
  int first = 0;
  int second = 1;
  int current;
  cout << first << " " << second << " ";
  for (int i = 3; i <= limit; i++)
  {
    current = first + second;
    cout << " " << current << " ";
    first = second;
    second = current;
  }
  cout << "\n";
  return 0;
}
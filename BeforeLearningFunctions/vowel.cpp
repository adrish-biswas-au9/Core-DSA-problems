#include <iostream>
using namespace std;

int main()
{
  char character = 'i';
  if (character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u')
  {
    cout << "Vowel\n";
  }
  else
  {
    cout << "Consonant\n";
  }
  return 0;
}
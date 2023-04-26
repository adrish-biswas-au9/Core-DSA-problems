#include <iostream>
using namespace std;

void arrayBasicOperations()
{
  cout << "Enter the size of the array\n";
  int size;
  cin >> size;
  int arr[size];

  for (int i = 0; i < size; i++)
  {
    cout << "Enter the " << (i + 1) << "th value of the array:\n";
    cin >> arr[i];
  }
  cout << "The Array:\n";
  cout << "[ ";
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << ", ";
  }
  cout << "]\n";
}

int main()
{
  arrayBasicOperations();
  return 0;
}
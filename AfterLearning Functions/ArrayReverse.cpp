#include <iostream>
using namespace std;

void arrayReverse()
{
  // int arr[5] = {3, 5, 7, 8, 9};
  cout << "Enter the size of the array:\n";
  int size;
  cin >> size;
  int arr[size];
  for (int i = 0; i < size; i++)
  {
    cout << "Enter the " << (i + 1) << "th value of the array:\n";
    cin >> arr[i];
  }
  cout << "The Array in reverse order:\n";
  cout << "{ ";
  for (int i = size - 1; i >= 0; i--)
  {
    cout << arr[i] << ", ";
  }
  cout << "}\n";
  return;
}

int main()
{
  arrayReverse();
  return 0;
}
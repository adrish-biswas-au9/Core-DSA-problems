#include <iostream>
using namespace std;

void arrayRotateOnce()
{
  cout << "Enter the size of the array:\n";
  int size;
  cin >> size;
  int arr[size];
  for (int i = 0; i < size; i++)
  {
    cout << "Enter the " << (i + 1) << "th value of the array:\n";
    cin >> arr[i];
  }
  int lastElement = arr[size - 1];
  for (int i = size; i >= 1; i--)
  {
    arr[i] = arr[i - 1];
  }
  arr[0] = lastElement;
  cout << "Rotated array:\n";
  cout << "{ ";
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << ", ";
  }
  cout << "}\n";
  return;
}

int main()
{
  arrayRotateOnce();
  return 0;
}
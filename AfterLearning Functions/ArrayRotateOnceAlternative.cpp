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
  int previousElement = arr[0];
  int temp;
  for (int i = 1; i < size; i++)
  {
    temp = arr[i];
    arr[i] = previousElement;
    previousElement = temp;
  }
  arr[0] = previousElement;
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
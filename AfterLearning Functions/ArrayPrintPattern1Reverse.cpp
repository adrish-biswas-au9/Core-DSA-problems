#include <iostream>
using namespace std;

void printArrayPattern1Reverse(int arr[], int size)
{
  cout << "The pattern print of the array in reverse order:\n";
  for (int i = 1; i <= size; i++)
  {
    cout << "{ ";
    for (int j = 0; j < size - i + 1; j++)
    {
      cout << arr[j] << ", ";
    }
    cout << "}\n";
  }
  return;
}

int main()
{
  cout << "Enter the size of the array that needs to be printed:\n";
  int size;
  cin >> size;
  int arr[size];
  for (int i = 0; i < size; i++)
  {
    cout << "Enter the " << (i + 1) << "th value of the array:\n";
    cin >> arr[i];
  }
  // cout << "Enter the range of the pattern to be printed:\n";
  // int n;
  // cin >> n;
  printArrayPattern1Reverse(arr, size);
  return 0;
}
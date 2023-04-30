#include <iostream>
using namespace std;

void printArrayNtimes(int arr[], int n, int size)
{
  // cout << sizeof(arr);
  // int size = sizeof(arr) / 4;
  cout << "array printed " << n << " times:\n";
  for (int i = 0; i < n; i++)
  {
    cout << "{ ";
    for (int j = 0; j < size; j++)
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
  cout << "Enter how many times do you want the array to be printed:\n";
  int n;
  cin >> n;
  printArrayNtimes(arr, n, size);
  return 0;
}
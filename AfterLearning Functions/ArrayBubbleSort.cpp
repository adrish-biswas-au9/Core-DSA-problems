#include <iostream>
using namespace std;

void arrayBubbleSort(int arr[], int size)
{
  int temp;
  for (int i = 0; i < size - 1; i++)
  {
    for (int j = 0; j < size - i - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
      // for (int k = 0; k < size; k++)
      // {
      //   cout << arr[k] << ", ";
      // }
      // cout << "\n";
    }
    // cout << "--------\n";
  }
  cout << "Sorted array:\n";
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
  cout << "Enter the size of the array whoch needs to be sorted:\n";
  int size;
  cin >> size;
  int arr[size];
  for (int i = 0; i < size; i++)
  {
    cout << "Enter the " << (i + 1) << "th value of the array:\n";
    cin >> arr[i];
  }
  arrayBubbleSort(arr, size);
  return 0;
}
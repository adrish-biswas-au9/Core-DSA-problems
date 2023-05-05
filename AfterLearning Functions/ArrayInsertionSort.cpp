#include <iostream>
using namespace std;

void arrayInsertionSort(int arr[], int n)
{
  int temp;
  for (int i = 1; i < n; i++)
  {
    for (int j = i; j >= 1; j--)
    {
      if (arr[j - 1] > arr[j])
      {
        temp = arr[j - 1];
        arr[j - 1] = arr[j];
        arr[j] = temp;
      }
      else
      {
        break;
      }
    }
  }
  cout << "The sorted array is:\n";
  cout << "{ ";
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << ", ";
  }
  cout << "}\n";
  return;
}

int main()
{
  cout << "Enter the size of the array that needs to be sorted:\n";
  int size;
  cin >> size;
  int arr[size];
  for (int i = 0; i < size; i++)
  {
    cout << "Enter the " << (i + 1) << "th value of the array:\n";
    cin >> arr[i];
  }
  arrayInsertionSort(arr, size);
  return 0;
}
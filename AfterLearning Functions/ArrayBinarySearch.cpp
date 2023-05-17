#include <iostream>
using namespace std;

void arrayBinarySearch(int arr[], int n, int target)
{
  int start = 0;
  int end = n - 1;
  int mid;
  while (start <= end)
  {
    mid = (start + end) / 2;
    if (target == arr[mid])
    {
      cout << "The element " << target << " is found in " << (mid + 1) << "th index!\n";
      return;
    }
    else if (target > arr[mid])
    {
      start = mid + 1;
    }
    else
    {
      end = mid - 1;
    }
  }
  cout << "The element " << target << " is not found!\n";
  return;
}

void arrayInsertionSort(int arr[], int n)
{
  for (int i = 1; i < n; i++)
  {
    for (int j = i; j >= 1; j--)
    {
      if (arr[j] < arr[j - 1])
      {
        int temp = arr[j];
        arr[j] = arr[j - 1];
        arr[j - 1] = temp;
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
  cout << "Enter the size of the array:\n";
  int size;
  cin >> size;
  int arr[size];
  for (int i = 0; i < size; i++)
  {
    cout << "Enter the " << (i + 1) << "th element of the array\n";
    cin >> arr[i];
  }
  arrayInsertionSort(arr, size);
  int element_to_be_found;
  cout << "Enter the element to be searched:\n";
  cin >> element_to_be_found;
  arrayBinarySearch(arr, size, element_to_be_found);
  return 0;
}
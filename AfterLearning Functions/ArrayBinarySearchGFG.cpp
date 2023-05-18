#include <iostream>
using namespace std;

int binarysearch(int arr[], int n, int k)
{
  // code here
  int start = 0;
  int end = n - 1;
  while (start <= end)
  {
    int mid = (start + end) / 2;
    if (arr[mid] == k)
    {
      return mid;
    }
    else if (arr[mid] > k)
    {
      end = mid - 1;
    }
    else if (arr[mid] < k)
    {
      start = mid + 1;
    }
  }
  return -1;
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
  cout << "The element " << element_to_be_found << " is found in " << binarysearch(arr, size, element_to_be_found) << "th index!\n";
  return 0;
}
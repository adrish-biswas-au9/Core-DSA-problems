#include <iostream>
using namespace std;

int arrayFindInsertPosition(int arr[], int n, int k)
{
  int start = 0;
  int end = n - 1;
  int insertIndex = n;
  while (start <= end)
  {
    int mid = (start + end) / 2;
    if (arr[mid] == k)
    {
      return mid;
    }
    else if (arr[mid] > k)
    {
      insertIndex = mid;
      end = mid - 1;
    }
    else
    {
      start = mid + 1;
    }
  }
  return insertIndex;
}

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
  cout << "The array after sorting is:\n";
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
    cout << "Enter the " << (i + 1) << "th value of the array:\n";
    cin >> arr[i];
  }
  arrayInsertionSort(arr, size);
  cout << "Enter the element whose correct position needs to be found:\n";
  int target;
  cin >> target;
  cout << "The position of the " << target << " is " << arrayFindInsertPosition(arr, size, target) << "\n";
  return 0;
}
#include <iostream>
using namespace std;

void arrayFindFirstAndLastOccurrence(int arr[], int n, int k)
{
  int start = 0;
  int end = n - 1;
  int leftMostIndex = -1;
  // first/left most occurrence
  while (start <= end)
  {
    int mid = (start + end) / 2;
    if (k == arr[mid])
    {
      leftMostIndex = mid;
      end = mid - 1;
    }
    else if (k > arr[mid])
    {
      start = mid + 1;
    }
    else
    {
      end = mid - 1;
    }
  }
  cout << "The first occurrence of " << k << " is " << leftMostIndex << "\n";
  int rightMostIndex = -1;
  start = 0;
  end = n - 1;
  // last/right most occurrence
  while (start <= end)
  {
    int mid = (start + end) / 2;
    if (k == arr[mid])
    {
      rightMostIndex = mid;
      start = mid + 1;
    }
    else if (k > arr[mid])
    {
      start = mid + 1;
    }
    else
    {
      end = mid - 1;
    }
  }
  cout << "The last occurrence of " << k << " is " << rightMostIndex << "\n";
  return;
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
    cout << "Enter the " << (i + 1) << "th element of the array:\n";
    cin >> arr[i];
  }
  arrayInsertionSort(arr, size);
  cout << "Enter the element whose first and last occurrence needs to be found:\n";
  int target;
  cin >> target;
  arrayFindFirstAndLastOccurrence(arr, size, target);
  return 0;
}
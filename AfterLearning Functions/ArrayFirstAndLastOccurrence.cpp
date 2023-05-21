#include <iostream>
using namespace std;

void arrayFindFirstAndLastOccurrence(int arr[], int n, int target)
{
  for (int i = 0; i < n; i++)
  {
    if (arr[i] == target)
    {
      cout << "The first occurrence is " << (i + 1) << "\n";
      for (int j = i + 1; j < n; j++)
      {
        if (arr[j] == target)
          continue;
        else
        {
          cout << "The last occurrence is " << j << "\n";
          return;
        }
      }
    }
  }
  cout << "The element " << target << " was not found!\n";
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
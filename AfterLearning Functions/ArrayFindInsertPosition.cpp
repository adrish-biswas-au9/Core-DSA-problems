#include <iostream>
using namespace std;

void arrayFindInsertPosition(int arr[], int n, int k)
{
  for (int i = 0; i < n; i++)
  {
    if (arr[i] == k)
    {
      cout << "The position of " << k << " is " << (i + 1) << "\n";
      return;
    }
    else if (arr[i] > k)
    {
      cout << "The inserted position of " << k << " is " << (i + 1) << "\n";
      return;
    }
  }
  cout << "The inserted position of " << k << " is " << (n + 1) << "\n";
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
    cout << "Enter the " << (i + 1) << "th value of the array:\n";
    cin >> arr[i];
  }
  arrayInsertionSort(arr, size);
  cout << "Enter the element whose correct position needs to be found:\n";
  int target;
  cin >> target;
  arrayFindInsertPosition(arr, size, target);
  return 0;
}
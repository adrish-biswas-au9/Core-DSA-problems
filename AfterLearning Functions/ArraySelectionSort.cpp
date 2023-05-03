#include <iostream>
using namespace std;

void selectionSort(int arr[], int n)
{
  // int smallest_for_each_step;
  int index_for_smallest_for_each_step;
  int temp;
  for (int i = 0; i < n - 1; i++)
  {
    // smallest_for_each_step = arr[i];
    index_for_smallest_for_each_step = i;
    for (int j = i; j < n; j++)
    {
      // cout << j << "\n";
      if (arr[index_for_smallest_for_each_step] > arr[j])
      {
        // smallest_for_each_step = arr[j];
        index_for_smallest_for_each_step = j;
      }
    }
    // cout << smallest_for_each_step << " " << index_for_smallest_for_each_step << " " << i << "\n";
    temp = arr[index_for_smallest_for_each_step];
    arr[index_for_smallest_for_each_step] = arr[i];
    arr[i] = temp;
  }
  cout << "The sorted array:\n";
  cout << "{ ";
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << ", ";
  }
  cout << "}\n";
}

int main()
{
  cout << "Enter the size of the array which will be sorted:\n";
  int size;
  cin >> size;
  int arr[size];
  for (int i = 0; i < size; i++)
  {
    cout << "Enter the " << (i + 1) << "th value of the array:\n";
    cin >> arr[i];
  }
  selectionSort(arr, size);
  return 0;
}
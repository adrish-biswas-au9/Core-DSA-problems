#include <iostream>
using namespace std;

int select(int arr[], int i, int n)
{
  // code here such that selectionSort() sorts arr[]
  int index_for_smallest_for_each_step = i;
  for (int j = i; j < n; j++)
  {
    // cout << j << "\n";
    if (arr[index_for_smallest_for_each_step] > arr[j])
    {
      index_for_smallest_for_each_step = j;
    }
  }
  return index_for_smallest_for_each_step;
}

void selectionSort(int arr[], int n)
{
  // https://practice.geeksforgeeks.org/problems/selection-sort/1
  int temp;
  int index_for_smallest_for_each_step;
  for (int i = 0; i < n - 1; i++)
  {
    index_for_smallest_for_each_step = select(arr, i, n);
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
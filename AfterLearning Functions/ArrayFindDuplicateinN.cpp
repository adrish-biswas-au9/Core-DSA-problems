#include <iostream>
using namespace std;

void arrayFindDuplicateinN(int arr[], int n)
{
  int count[n];
  for (int i = 0; i < n; i++)
  {
    count[i] = 0;
  }
  for (int i = 0; i < n; i++)
  {
    count[arr[i]]++;
  }
  for (int i = 0; i < n; i++)
  {
    if (count[i] > 1)
    {
      cout << i << " ";
    }
  }
  cout << "\n";
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
  arrayFindDuplicateinN(arr, size);
  return 0;
}
#include <iostream>
using namespace std;

void sort012(int a[], int n)
{
  // https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1
  int count_zeros = 0, count_ones = 0, count_twos = 0;
  for (int i = 0; i < n; i++)
  {
    if (a[i] == 0)
    {
      count_zeros++;
    }
    else if (a[i] == 1)
    {
      count_ones++;
    }
    else
    {
      count_twos++;
    }
  }
  // if(count_zeros > 0) {
  for (int i = 0; i < count_zeros; i++)
  {
    a[i] = 0;
  }
  //}

  // if(count_ones > 0) {
  for (int i = count_zeros; i < count_zeros + count_ones; i++)
  {
    a[i] = 1;
  }
  //}

  // if(count_twos > 0) {
  for (int i = count_zeros + count_ones; i < n; i++)
  {
    a[i] = 2;
  }
  //}
  // -------GFG solution ends here-------
  // extra part for display purpose; was not required in the GFG solution:
  cout << "The array after sorting:\n";
  cout << "{ ";
  for (int i = 0; i < n; i++)
  {
    cout << a[i] << ", ";
  }
  cout << "}\n";
  return;
}

int main()
{
  cout << "Enter the size of the array which will be sorted:\n";
  int size;
  cin >> size;
  int arr[size];
  for (int i = 0; i < size; i++)
  {
    cout << "Enter the " << (i + 1) << "th value of the array; only 0s, 1s and 2s allowed:\n";
    cin >> arr[i];
  }
  sort012(arr, size);
  return 0;
}
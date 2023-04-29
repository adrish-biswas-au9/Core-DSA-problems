#include <iostream>
using namespace std;

int MissingNumber(int array[], int n)
{
  // https://practice.geeksforgeeks.org/problems/missing-number-in-array1416/1
  int sum = 0;
  for (int i = 0; i < n - 1; i++)
  {
    sum += array[i];
  }
  int sumOfNnumbers = (n * (n + 1)) / 2;
  return sumOfNnumbers - sum;
}

int main()
{
  cout << "Enter the number of natural numbers out of which one will be missing in the array:\n";
  int n;
  cin >> n;
  int arr[n - 1];
  for (int i = 0; i < n - 1; i++)
  {
    cout << "Enter the " << (i + 1) << "th value of the array:\n";
    cin >> arr[i];
  }
  cout << "The missing number in the array is:\n";
  cout << MissingNumber(arr, n) << "\n";
  return 0;
}
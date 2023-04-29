#include <iostream>
using namespace std;

int makeProductOne(int arr[], int N)
{
  // https://practice.geeksforgeeks.org/problems/minimum-steps-to-make-product-equal-to-one/1
  int steps = 0;
  int zeros_count = 0;
  int multiplier = 1;
  for (int i = 0; i < N; i++)
  {
    if (arr[i] > 0)
    {
      steps += arr[i] - 1;
      multiplier *= 1;
    }
    else if (arr[i] < 0)
    {
      steps += -(arr[i] + 1);
      multiplier *= -1;
    }
    else
    {
      zeros_count++;
      steps += 1;
    }
  }
  if (multiplier == 1 || zeros_count > 0)
  {
    return steps;
  }
  steps += 2;
  return steps;
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
  cout << "The minimum number of steps needed to get the array elements's product as 1 is:\n";
  cout << makeProductOne(arr, size) << "\n";
  return 0;
}
#include <iostream>
using namespace std;

int equilibriumPoint(long long a[], int n)
{
  // https://practice.geeksforgeeks.org/problems/equilibrium-point-1587115620/1
  long long sumLeft = 0;
  long long sumRight = 0;
  int equilibriumPoint = -1;
  for (int i = 0; i < n; i++)
  {
    sumLeft = 0;
    sumRight = 0;
    for (int j = 0; j < i; j++)
    {
      sumLeft += a[j];
    }
    for (int j = n - 1; j > i; j--)
    {
      sumRight += a[j];
    }
    if (sumLeft == sumRight)
    {
      equilibriumPoint = i + 1;
      break;
    }
  }
  return equilibriumPoint;
}

int main()
{
  cout << "Enter the size of the array whose equilibrium needs to be found:\n";
  int size;
  cin >> size;
  long long arr[size];
  for (int i = 0; i < size; i++)
  {
    cout << "Enter the " << (i + 1) << "th value of the array:\n";
    cin >> arr[i];
  }
  int equlibriumIndex = equilibriumPoint(arr, size);
  cout << "The equilibrium point of the array is " << equlibriumIndex << "\n";
  return 0;
}
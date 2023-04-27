#include <iostream>
using namespace std;

void arrayMax()
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
  int max = arr[0];
  for (int i = 1; i < size; i++)
  {
    if (max < arr[i])
    {
      max = arr[i];
    }
  }
  cout << "The maximum element is: " << max << "\n";
  return;
}

int main()
{
  arrayMax();
  return 0;
}
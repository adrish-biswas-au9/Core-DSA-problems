#include <iostream>
using namespace std;

void arrayMin()
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
  int min = arr[0];
  for (int i = 1; i < size; i++)
  {
    if (min > arr[i])
    {
      min = arr[i];
    }
  }
  cout << "The minimum element is: " << min << "\n";
  return;
}

int main()
{
  arrayMin();
  return 0;
}
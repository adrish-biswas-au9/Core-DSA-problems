#include <iostream>
using namespace std;

void arrayPrintEven()
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
  cout << "The even numbers are:\n";
  for (int i = 0; i < size; i++)
  {
    if (arr[i] % 2 == 0)
    {
      cout << arr[i] << " ";
    }
  }
  cout << "\n";
  return;
}

int main()
{
  arrayPrintEven();
  return 0;
}
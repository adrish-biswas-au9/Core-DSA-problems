#include <iostream>
using namespace std;

void arrayFindNonDuplicate()
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
  cout << "The Non duplicate value in the array is:\n";
  int non_duplicate = arr[0];
  for (int i = 1; i < size; i++)
  {
    non_duplicate = non_duplicate ^ arr[i];
  }
  cout << non_duplicate << " ";
  cout << "\n";
}

int main()
{
  arrayFindNonDuplicate();
  return 0;
}
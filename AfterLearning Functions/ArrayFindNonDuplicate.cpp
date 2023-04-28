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
  int flag = 0;
  cout << "Non duplicate values in the array is:\n";
  for (int i = 0; i < size; i++)
  {
    flag = 0;
    for (int j = 0; j < size; j++)
    {
      if (i == j)
        continue;
      if (arr[i] == arr[j])
      {
        flag = 1;
        break;
      }
    }
    if (flag == 0)
    {
      cout << arr[i] << ", ";
    }
  }
  cout << "\n";
}

int main()
{
  arrayFindNonDuplicate();
  return 0;
}
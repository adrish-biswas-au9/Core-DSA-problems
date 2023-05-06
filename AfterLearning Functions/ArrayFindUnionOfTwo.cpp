#include <iostream>
using namespace std;

void findUnion(int arr1[], int arr2[], int n, int m)
{
  int arr3[n + m];
  int size3 = n + m;
  for (int i = 0; i < n; i++)
  {
    arr3[i] = arr1[i];
  }
  for (int i = n, j = 0; i < size3; i++, j++)
  {
    arr3[i] = arr2[j];
  }
  for (int i = 1; i < size3; i++)
  {
    for (int j = i; j >= 1; j--)
    {
      if (arr3[j] < arr3[j - 1])
      {
        int temp = arr3[j];
        arr3[j] = arr3[j - 1];
        arr3[j - 1] = temp;
      }
      else
        break;
    }
  }
  int unionOfArrays[size3];
  int j = 0;
  for (int i = 0; i < size3 - 1; i++)
  {
    if (arr3[i] != arr3[i + 1])
    {
      unionOfArrays[j++] = arr3[i];
    }
  }
  unionOfArrays[j++] = arr3[size3 - 1];
  cout << "The union of two arrays is:\n";
  cout << "{ ";
  for (int i = 0; i < j; i++)
  {
    cout << unionOfArrays[i] << ", ";
  }
  cout << "}\n";
}

int main()
{
  cout << "Enter the size of the first array:\n";
  int size1;
  cin >> size1;
  int arr1[size1];
  cout << "Enter the size of the second array:\n";
  int size2;
  cin >> size2;
  int arr2[size2];
  for (int i = 0; i < size1; i++)
  {
    cout << "Enter the " << (i + 1) << "th value of the first array:\n";
    cin >> arr1[i];
  }
  for (int i = 0; i < size2; i++)
  {
    cout << "Enter the " << (i + 1) << "th value of the second array:\n";
    cin >> arr2[i];
  }
  findUnion(arr1, arr2, size1, size2);
  return 0;
}
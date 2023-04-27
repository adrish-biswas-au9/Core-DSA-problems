#include <iostream>
using namespace std;

bool isPrime(int number)
{
  if (number < 2)
  {
    return false;
  }
  else if (number == 2)
  {
    return true;
  }
  for (int i = 2; i < number; i++)
  {
    if (number % i == 0)
    {
      return false;
    }
  }
  return true;
}

void arrayPrintPrime()
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
  cout << "The prime numbers in the array are:\n";
  for (int i = 0; i < size; i++)
  {
    if (isPrime(arr[i]))
    {
      cout << arr[i] << " ";
    }
  }
  cout << "\n";
  return;
}

int main()
{
  arrayPrintPrime();
  return 0;
}
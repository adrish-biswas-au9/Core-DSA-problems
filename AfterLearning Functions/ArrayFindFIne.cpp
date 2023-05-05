#include <iostream>
using namespace std;

long long int totalFine(int n, int date, int car[], int fine[])
{
  // https://practice.geeksforgeeks.org/problems/find-the-fine4353/1?page=2&sortBy=submissions&searchQuery=Find
  long long totalFineAmount = 0;
  int isDateOdd = date % 2;
  switch (isDateOdd)
  {
  case 1:
  {
    for (int i = 0; i < n; i++)
    {
      if (car[i] % 2 == 0)
      {
        totalFineAmount += fine[i];
      }
    }
    break;
  }

  case 0:
  {
    for (int i = 0; i < n; i++)
    {
      if (car[i] % 2 != 0)
      {
        totalFineAmount += fine[i];
      }
    }
    break;
  }
  }
  return totalFineAmount;
}

int main()
{
  cout << "Enter the size of the array of cars and fine:\n";
  int size;
  cin >> size;
  int car[size];
  int fine[size];
  for (int i = 0; i < size; i++)
  {
    cout << "Enter the " << (i + 1) << "th value of the car array:\n";
    cin >> car[i];
    cout << "Enter the " << (i + 1) << "th value of the fine array:\n";
    cin >> fine[i];
  }
  cout << "Enter the date of fine collection:\n";
  int date;
  cin >> date;
  long long totalFineAmount = totalFine(size, date, car, fine);
  cout << "The total fine collected for the date " << date << " is " << totalFineAmount << "\n";
  return 0;
}
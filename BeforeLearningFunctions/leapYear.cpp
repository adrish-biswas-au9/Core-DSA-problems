#include <iostream>
using namespace std;
// int leapYearCheck(int year)
// {
//   return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
// }

int main()
{
  // Every year that is exactly divisible by four is a leap year, except for years that are exactly divisible by 100, but these centurial years are leap years, if they are exactly divisible by 400.
  int year = 2100;
  if (year % 4 == 0 && year % 100 != 0 || (year % 400 == 0))
  {
    cout << "Leap Year\n";
  }
  // else if (year % 400 == 0)
  // {
  //   cout << "Leap Year\n";
  // }
  else
  {
    cout << "Not Leap Year\n";
  }
  // cout << leapYearCheck(year);
  return 0;
}

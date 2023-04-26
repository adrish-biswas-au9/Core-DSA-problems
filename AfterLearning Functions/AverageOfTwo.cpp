#include <iostream>
using namespace std;

float average(float num1, float num2)
{
  return (num1 + num2) / 2;
}

int main()
{
  cout << "Enter two numbers whose Average needs to be found\n";
  float a, b;
  cin >> a >> b;
  cout << "Average: " << average(a, b) << "\n";
  return 0;
}
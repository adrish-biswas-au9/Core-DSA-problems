#include <iostream>
using namespace std;
int main()
{
  int a = 10;
  char b = 'p';
  float c = 2.34567;
  double d = 2.34567891;
  bool e = 1;
  int f = 'C';
  // char g = 1 + 'A';
  // int g = 1 + 'a';
  //  char g = 590;
  char g = (char)('A' + 'B');
  // cout << a << " " << b << " " << c << " " << d << " " << e << " " << sizeof(d) << " " << f << " " << (a / 3) << g << "\n";
  cout << g;
  // printf("%lf\n", d);
  return 0;
}
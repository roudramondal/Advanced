// passing funcation as paramatter
// problem1
#include <bits/stdc++.h>
using namespace std;
int add (int x, int y)
{
  return (x + y);
}
int multiply (int x, int y )
{
  return (x * y);
}
int compute (int x, int y , int (*fun_ptr) (int , int ))
{
  return fun_ptr(x, y);
}
int main ()
{
  cout << compute(10, 20, add) << endl;
  cout << compute(10, 20, multiply) << endl;
  return 0;  
}
//funcation pointer
#include <bits/stdc++.h>
using namespace std;
// void fun ()
// {
//   cout << "gfg";

// }
// int main ()
// {
//   void (*fun_ptr)() = &fun;
//   fun_ptr(); // (*ptr_ptr)();
//   return 0;
// }
//for complex funcation
int fun (int x , int y)
{
  return (x + y);
}

int main ()
{
  auto fun_ptr = fun; // int (*fun.ptr)(int,int)=fun;
  cout << fun_ptr(10, 20);
  return 0;
}
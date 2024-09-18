// unique pointer 
#include <bits/stdc++.h>
using namespace std;
class test 
{
  int x;
  public :
  test (int a  = 0)
  {
    x = a;
    cout << "construtor \n";
  }
  ~test ()
  {
    cout << "distructor \n";

  }
  void  fun ()
  {
    cout << x << endl;
  }
};
int main ()
{
  cout << " main begin \n";
  {
    unique_ptr<test> ptr(new test(10));
    ptr->fun();
  }
  cout << "main ends \n";
  return 0;
}
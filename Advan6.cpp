#include <bits/stdc++.h>
using namespace std;
class test 
{
  int x;
  public:
  test   (int a = 0)
  {
    cout << "constructor  \n";

  }
  ~test () 
  {
    cout << "Destructor \n";
  }
  void fun ()
  {
    cout << x << endl;
  }
};
int main ()
{
  weak_ptr<test> p1;
  {
    shared_ptr<test>p2 = make_shared<test>(10);
   p1 = p2;
  }
  cout << "main end \n ";
  return 0;
}
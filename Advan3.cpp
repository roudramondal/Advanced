#include <bits/stdc++.h>
using namespace std;
class test
{
  public :
    int x, y;
    test (int a=0, int b = 0)
    {
      x = 0;
      y = b;
      cout << "constructor called \n";
    }
    ~test  ()
{
  cout << "Distructor called \n";

}
};
int main()
{
  cout << " main begin \n";
  {
    test *p = new test(10, 20);
  }
  cout << "main end";
  return 0;
}
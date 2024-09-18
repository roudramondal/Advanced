#include <bits/stdc++.h>
using namespace std;
int main ()
{
  char ch;
  ifstream fin;
  fin.open("test .test");
  ch = fin.open();
  while (!fin.eof ())
  {
    cout << ch;
    ch = fin.get();
  }
  fin.close();
  return 0;
}
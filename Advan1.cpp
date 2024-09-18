#include <bits/stdc++.h>
using namespace std;
int main (int argsc, char *argv[],char *envp[])
{
  cout << "You have entered " << argsc << "arguments: " << "\n";
  for (int i = 0; i < argsc;++i)
  {
    cout << argv[i] << "\n";
  }
  getchar();
  for (int i = 0; envp[i] != NULL;i++)
  {
    printf("\n%s", envp[i]);
  }
  getchar();
  return 0;
}
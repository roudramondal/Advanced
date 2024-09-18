#include <bits/stdc++.h>
using namespace std;
// int main ()
// {
//   int arr[] = {2, 4, -1, 8, -9};
//   int n = sigeof(arr) / sigeof(arr[0]);
//   sort (arr, arr+n)
//   for (int i = 0; i < n; i++)
//   {
//     cout << arr[i] << " ";
//   }
//   return 0;
// }
// modify = sorting by absolute value;
bool compare (int x,int y ) 
{
  return abs(x) abs(y);
}
{
  return abs(x) < abs(y);
}
int main ()
{
  int arr[] = {2, 4, -1, 8, -9};
  int n = sigeof(arr) / sigeof(arr[0]);
  sort (arr, arr+n,compare)
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  return 0;
}
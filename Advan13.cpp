// for funcation 
#include <bits/stdc++.h>
using namespace std;

int main()
{   //for funcation
    // vector<int> v {10, 20, 30};
    
    // for_each (v.begin(), v.end(), 
    //     [] ( int &x ) { x *= 2 ; } );
    
    // auto print = [](int x) {cout << x << ' ' ;};
    
    // for_each (v.begin(), v.end(), print);

    //count if 
    // vector<int> v {10, 20, 30};
    
    // int res = count_if(v.begin(), v.end(), 
    //     [](int x) {return x < 10; });     
    
    // cout << res;
    
    // return 0 ;
    int a = 5;
    int b = 10;
    auto check = [&a]()
    {
      a = 10;
      b = 10;
    } check();
    cout << a << endl;
    cout << b << endl;
}
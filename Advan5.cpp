// weak pointer 

#include <bits/stdc++.h>
using namespace std;

class test {
    int x;
public:
    test(int a = 0) {
        x = a;
        cout << "constructor \n";
    }

    ~test() {
        cout << "destructor \n";
    }

    void fun() {
        cout << x << endl;
    }
};

int main() {
    shared_ptr<test> ptr1(new test(10)); // Correct name: ptr1
    shared_ptr<test> ptr2 = ptr1; // Assign ptr1 to ptr2
    cout << ptr1.use_count() << endl; // use_count(), not use.count()
    cout << ptr2.use_count() << endl; // use_count(), not use.count()
    return 0;
}

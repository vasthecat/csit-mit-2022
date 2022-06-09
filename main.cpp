#include <iostream>
using namespace std;

int fib(int n)
{
    int a = 0;
    int b = 1;
    int t;
    for (int i = 0; i < n; i++) {
        t =  b;
        b += a;
        a =  t;
    }
    return a;
}


int main()
{
    cout << "Hello, world!" << endl;
    cout << fib(10) << endl;
    return 0;
}
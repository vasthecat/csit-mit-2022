#include <iostream>
using namespace std;

int fib(int n) {
    if (n == 1) {
        return 0;
    }
    else if (n < 4) {
        return 1;
    }
    else {
        return (fib(n - 1) + fib(n - 2));
    }
}

int main()
{
    cout << "Hello, world!" << endl;
    cout << fib(10) << endl;
    return 0;
}
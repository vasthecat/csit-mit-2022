#include <iostream>

using namespace std;
int fib(int n) {
    int a = 0, b = 1;
    for (int i = 2; i < n; ++i) {
        b += a;
        a = b - a;
    }
    cout << b << endl;
}

int main() {
    fib(10);
    return 0;
}
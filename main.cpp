#include <iostream>

int fib(int n) {
    int a = 0;
    int b = 1;
    int c;

    for (int i = 1; i < n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return a;
}

int main()
{
    std::cout << "Hello, world!" << std::endl;

    std::cout << fib(10) << std::endl;

    return 0;
}

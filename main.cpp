#include <iostream>

int fib(int x) {
    int a = 0, b = 1, t;
    for (int i = 1; i < x; ++i) {
        t = b;
        b += a;
        a = t;
    }
    return a;
}

int main()
{
    std::cout << "Hello, world!" << std::endl;
    std::cout << fib(10) << std::endl;
    return 0;
}

#include <iostream>

int fib(int n) {
    if(n == 1)
        return 0;

    int a = 0, b = 1;
    for(int i = 1; i < n - 1; i++) {
        b += a;
        a = b - a;
    }

    return b;
}

int main()
{
    std::cout << "Hello, world!" << std::endl;

    std::cout << fib(10) << std::endl;
    return 0;
}

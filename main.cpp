#include <iostream>

int fib(int n) {
    int last = 0;
    int slast = 0;
    int a = 0;
    for (int i = 0; i < n; i++) {
        a = last + slast;
        if (a == 0) last = 1;
        slast = last;
        last = a;
    }
    return a;
}

int main()
{
    std::cout << "Hello, world!" << std::endl;
    std::cout << fib(10) << std::endl;
    return 0;
}

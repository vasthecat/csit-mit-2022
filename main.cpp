#include <iostream>

int fib(int n) {
    int a = 0;
    int b = 1;
    for (int i = 1; i < n; ++i) {
        int temp = a;
        a += b;
        b = temp;
    }
    return a;
}

int main()
{
    std::cout << "Hello, world!" << std::endl;
    std::cout << fib(10) << std::endl;
    return 0;
}

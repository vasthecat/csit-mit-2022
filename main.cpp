#include <iostream>
#include <vector>

int fib(int n) {
    if (n <= 0) return -1;
    if (n == 1) return 0;
    if (n == 2) return -1;

    int a = 0, b = 1;
    for (int i = 3; i <= n; i++) {
        int c = a + b;
        a = b;
        b = c;
    }
    return b;
}


int main()
{
    std::cout << "Hello, world!" << std::endl;
    std::cout << fib(10) << std::endl;

    return 0;
}
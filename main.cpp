#include <iostream>

int fib(int n) {
    int p1 = 1;
    int p2 = 0;
    int s = n - 1;
    for (int i = 3; i <= n; i++) {
        s = p2 + p1;
        p2 = p1;
        p1 = s;
    }
    return s;
}

int main()
{
    std::cout << "Hello, world!" << std::endl;
    std::cout << fib(10) << std::endl;
    return 0;
}

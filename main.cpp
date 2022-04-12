#include <iostream>

int fib(int n) {
    int last = 0, next = 1;

    for (int i = 3; i <= n; i++)
        std::swap(last += next, next);

    return (n>2)?next:n-1;
}

int main()
{
    std::cout << "Hello, world!" << std::endl;
    std::cout << fib(10) << std::endl;

    return 0;
}

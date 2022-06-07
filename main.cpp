#include <iostream>

int fib(int n){
    if (n == 1) return 0;
    else if (n == 2) return 1;
    return fib(n-2) + fib(n-1);
}


int main()
{
    std::cout << "Hello, world!" << std::endl;
    std::cout << fib(10) << std::endl;
    return 0;
}

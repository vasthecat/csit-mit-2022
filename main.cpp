#include <iostream>

int fib(int n) {

    if (n == 0)
        return 0; // базовый случай (условие завершения)
    if (n == 1)
        return 1; // базовый случай (условие завершения)
    return fib(n-1) + fib(n-2);

}

int main()
{
    std::cout << "Hello, world!" << std::endl;

    std::cout << fib(9) << std::endl; // 9, т.к. счет начинается с нуля

    return 0;
}

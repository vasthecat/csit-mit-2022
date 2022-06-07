#include <iostream>

int fib(int n){                                             //calculating the fibonacci number
    int tmp, n_1 = 0, n_2 = 1;
    while (n-- > 1){
        tmp = n_1;
        n_1 = n_2;
        n_2 = n_1 + tmp;
    }
    return n_1;
}

int main()
{
    std::cout << "Hello, world!" << std::endl;

    std::cout << fib(10) << std::endl;
    
    return 0;
}

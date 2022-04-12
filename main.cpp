#include <iostream>

using namespace std;

//функция Фибоначчи
int fib(int n)
{
    int a = 0;
    int b = 1;
    for(int i = 2; i <= n; i++){
	int c = a + b;
	a = b;
	b = c;
    }
    return a;
}

void main()
{
    std::cout << "Hello, world!" << std::endl;

    cout << fib(10);
}
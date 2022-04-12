#include <iostream>

int fib(int n) {
	int a = 0, b = 1;
	for (int i = 0; i < n-1; ++i) {
		int t = b;
		b += a;
		a = t;
	}
	return a;}
int main()
{
    std::cout << "Hello, world!" << std::endl;
    std::cout << fib(10) << std::endl;
    return 0;
}

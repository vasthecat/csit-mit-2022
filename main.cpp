#include <iostream>

int fib(int n) {
	int f1 = 0;
	int f2 = 1;
	int fn = 1;
	if (n >= 1)
		if (n >= 2)
			for (int i = 0; i < n - 2; i++) {
				fn = f1 + f2;
				f1 = f2;
				f2 = fn;
			}

	return fn;
}



int main()
{
    std::cout << "Hello, world!" << std::endl;
    std::cout << fib(10);
    return 0;
}

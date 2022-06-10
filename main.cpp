#include <iostream>

int fib(int n)
{
	int temp, a = 0, b = 1;
	if(n == 0)
		return a;
	else if(n == 1)
		return b;
	else
	{
		for(int i = 0; i < n-1; ++i)
		{
			temp = b;
			b += a;
			a = temp;
		}
		return a;
	}
}

int main()
{
	std::cout << "Hello, world!" << std::endl;
	std::cout << fib(10) << std::endl;
	return 0;
}

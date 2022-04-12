#include <iostream>
#include <vector>

int fib(int n) {
	int a = 0, b = 1;
	for (int i = 0; i < n - 1; ++i) {
		int t = b;
		b += a;
		a = t;
	}
	return a;
}

void bubble(std::vector<int>& v) {
	for (int i = 0; i < v.size() - 1; ++i)
		for (int j = v.size() - 1; j > i; --j)
			if (v[j - 1] > v[j])
				std::swap(v[j - 1], v[j]);
}

int main()
{
	std::vector<int> vec = {6, 2, 1, 4, 5, 6, 9, 12, 3, 1};

	std::cout << "fib(13) = " << fib(13) << std::endl;

	for (int i : vec) std::cout << i << " ";
	bubble(vec);
	cout << endl; for (int i : vec) std::cout << i << " ";
    return 0;
}

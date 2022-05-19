#include <iostream>
#include <vector>

int fib(int n) {
    int last = 0;
    int slast = 0;
    int a = 0;
    for (int i = 0; i < n; i++) {
        a = last + slast;
        if (a == 0) last = 1;
        slast = last;
        last = a;
    }
    return a;
}

void bubble(std::vector<int> &v) {
    for (int i = 0; i < v.size(); i++) {
        for (int j = 0; j < v.size() - 1; j++) {
            if (v[j] > v[j+1]) std::swap(v[j], v[j+1]);
        }
    }
}

int main()
{
    std::vector<int> numbers({6, 2, 1, 4, 5, 6, 9, 12, 3, 1});
    std::cout << "Hello, world!" << std::endl;
    std::cout << fib(10) << std::endl;
    for (int n : numbers) {
        std::cout << n << " ";
    }
    std::cout << std::endl;
    bubble(numbers);
    for (int n : numbers) {
        std::cout << n << " ";
    }
    std::cout << std::endl;
    return 0;
}

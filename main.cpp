#include <iostream>
#include <exception>
#include <vector>

int fib(int n) {
    if (n <= 0) throw std::exception("you cannot do that");
    if (n == 1) return 0;
    if (n == 2) return 1;

    int a = 0, b = 1;
    for (int i = 3; i <= n; i++) {
        int c = a + b;
        a = b;
        b = c;
    }
    return b;
}

template <typename T>
void bubble(std::vector<T> &v) {
    for (int i = 0; i < v.size(); i++) {
        for (int j = 0; j < v.size() - 1; j++) {
            if (v[j] > v[j + 1]) {
                std::swap(v[j], v[j + 1]);
            }
        }
    }
}

int main()
{
    std::cout << "Hello, world!" << std::endl;
    std::cout << fib(10) << std::endl;

    std::vector<int> v = {6, 2, 1, 4, 5, 6, 9, 12, 3, 1};
    for (int e : v) {
        std::cout << e << ' ';
    }
    std::cout << std::endl;
    bubble(v);
    for (int e : v) {
        std::cout << e << ' ';
    }
    std::cout << std::endl;

    return 0;
}

#include <iostream>
#include <algorithm>
#include <vector>


int fib(int n) {
    if (n == 1) return 0;
    else if (n == 2) return 1;
    else return fib(n - 1) + fib(n - 2);
}


void output(std::vector<int> v) {
    for (int i = 0; i < v.size(); ++i) {
        std::cout << v[i] << " ";
    }
    std::cout << std::endl;
}


void bubble(std::vector<int>& v) {
    output(v);
    int n = v.size();
    for (int i = 0; i < n - 1; ++i)
        for (int j = n - 1; j > i; --j)
            if (v[j - 1] > v[j])
                std::swap(v[j - 1], v[j]);

    output(v);
}


int main() {
    std::vector<int> v = { 6, 2, 1, 4, 5, 6, 9, 12, 3, 1 };

    std::cout << "Hello, world!" << std::endl;
    std::cout << fib(10) << std::endl;
    bubble(v);
    return 0;
}

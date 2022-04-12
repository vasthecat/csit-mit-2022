#include <iostream>
#include <vector>
#include <algorithm>

int fib(int n) {
    if (n <= 0) return -1;
    if (n == 1) return 0;
    if (n == 2) return -1;

    int a = 0, b = 1;
    for (int i = 3; i <= n; i++) {
        int c = a + b;
        a = b;
        b = c;
    }
    return b;
}

void bubble(std::vector<int> &v) {
    for (int i = 0; i != v.size(); ++i) {
        for (int j = v.size() - 1; j != i; --j) {;
            if (v[j - 1] > v[j]) 
                std::swap(v[j - 1], v[j]);
        }
    }
}


int main()
{
    std::cout << "Hello, world!" << std::endl;
    std::cout << fib(10) << std::endl;

    std::vector<int> vec = {6, 2, 1, 4, 5, 6, 9, 12, 3, 1};
    for (int i = 0; i != vec.size(); ++i) {
        std::cout << vec[i] << " ";
    } 
    std::cout << std::endl;
    bubble(vec);
    for (int i = 0; i != vec.size(); ++i) {
        std::cout << vec[i] << " ";
    } 
    std::cout << std::endl;
    return 0;
}
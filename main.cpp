#include <iostream>
#include <vector>
#include <algorithm>

int fib(int n) {
    int a = 0;
    int b = 1;
    for (int i = 1; i < n; ++i) {
        int temp = a;
        a += b;
        b = temp;
    }
    return a;
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

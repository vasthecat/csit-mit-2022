#include <iostream>
#include <vector>
#include <algorithm>

int fib(int n) {
    if(n == 1)
        return 0;

    int a = 0, b = 1;
    for(int i = 1; i < n - 1; i++) {
        b += a;
        a = b - a;
    }

    return b;
}

void bubble(std::vector<int> &v) {
    for(int i = 0; i < v.size(); i++) {
        for(int j = 1; j < v.size(); j++) {
            if(v[j - 1] > v[j])
                std::swap(v[j - 1], v[j]);
        }
    }
}

int main()
{
    std::cout << "Hello, world!" << std::endl;

    std::cout << fib(10) << std::endl;

    std::vector<int> v = {6, 2, 1, 4, 5, 6, 9, 12, 3, 1};
    for(int x : v)
        std::cout << x << ' ';
    std::cout << std::endl;

    bubble(v);

    for(int x : v)
        std::cout << x << ' ';
    std::cout << std::endl;

    return 0;
}

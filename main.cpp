#include <iostream>
#include <vector>

int fib(int x) {
    int a = 0, b = 1, t;
    for (int i = 1; i < x; ++i) {
        t = b;
        b += a;
        a = t;
    }
    return a;
}

void bubble(std::vector <int> &v)
{
    for (int i = 0; i < v.size() - 1; ++i) 
    {
        for (int j = 0; j < v.size() - 1 - i; ++j)
        {
            if (v[j] > v[j + 1]) std::swap(v[j], v[j + 1]);
        }
    }
}

int main()
{
    std::cout << "Hello, world!" << std::endl;
    std::cout << fib(10) << std::endl;
    std::vector <int> v = {6, 2, 1, 4, 5, 6, 9, 12, 3, 1};
    for (auto i : v) std::cout << i << " ";
    std::cout << std::endl;
    bubble(v);
    for (auto i : v) std::cout << i << " ";
    std::cout << std::endl;
    return 0;
}

#include <iostream>
#include <vector>

int fib(int n) {
    int p1 = 1;
    int p2 = 0;
    int s = n - 1;
    for (int i = 3; i <= n; i++) {
        s = p2 + p1;
        p2 = p1;
        p1 = s;
    }
    return s;
}

void bubble_sort(std::vector<int> &v) {
    bool swapped;
    do {
        swapped = false;
        for (int i=0; i<v.size()-1; i++)
            if (v[i] > v[i+1]) {
                std::swap(v[i], v[i+1]);
                swapped = true;
            }
    } while (swapped);
}

int main()
{
    std::vector<int> v{6, 2, 1, 4, 5, 6, 9, 12, 3, 1};
    std::cout << "Hello, world!" << std::endl;
    std::cout << fib(10) << std::endl;
    for (auto x : v) std::cout << x << " ";
    std::cout << std::endl;
    bubble_sort(v);
    for (auto x : v) std::cout << x << " ";
    std::cout << std::endl;
    return 0;
}

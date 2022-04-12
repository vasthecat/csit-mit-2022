#include <iostream>
#include <vector>

int fib(int n) {
    if (n == 1)
        return 0;
    if (n == 2)
        return 1;

    int a = 0;
    int b = 1;
    for (int i = 0; i < n - 1; ++i) {
        int t = a;
        a = b;
        b = b + t;
    }

    return a;
}

void bubble(std::vector<int>& v) {
    for (int i = 0; i < v.size() - 1; ++i) {
        bool flag = false;
        for (int j = 0; j < v.size() - 1 - i; ++j)
            if (v[j] > v[j + 1]) {
                std::swap(v[j], v[j + 1]);
                flag = true;
            }
        if (!flag)
            break;
    }
}

int main()
{
    std::cout << "Hello, world!" << std::endl;

    std::cout << fib(10) << "\n";

    std::vector<int> v = { 6, 2, 1, 4, 5, 6, 9, 12, 3, 1, };

    std::cout << "Initial vector: "; for (std::vector<int>::iterator it = v.begin(); it != v.end(); std::cout << *it << " ", ++it); std::cout << "\n";

    bubble(v);

    std::cout << "Sorted vector: "; for (std::vector<int>::iterator it = v.begin(); it != v.end(); std::cout << *it << " ", ++it); std::cout << "\n";
    return 0;
}

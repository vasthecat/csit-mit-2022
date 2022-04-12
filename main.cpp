#include <iostream>
#include <vector>

int fib(int n) {
    int last = 0, next = 1;

    for (int i = 3; i <= n; i++)
        std::swap(last += next, next);

    return (n>2)?next:n-1;
}

void bubble(std::vector<int> &v) {
    for (int i = 0; i < v.size()-1; i++) {
        bool sorted = true;
        for (int j = 0; j < v.size()-1-i; j++) {
            if (v[j] > v[j+1]) {
                std::swap(v[j], v[j+1]);
                sorted = false;
            }
            if (sorted) break;
        }
    }
}

int main()
{
    std::vector<int> v = {6, 2, 1, 4, 5, 6, 9, 12, 3, 1};

    std::cout << "Hello, world!" << std::endl;
    std::cout << fib(10) << std::endl;

    for (int i = 0; i < v.size(); i++) std::cout << v[i] << " ";
    std::cout << std::endl;

    bubble(v);
    
    for (int i = 0; i < v.size(); i++) std::cout << v[i] << " ";
    std::cout << std::endl;

    return 0;
}

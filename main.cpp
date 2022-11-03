#include <iostream>
#include <vector>

int fib(int n) {
    int a = 0;
    int b = 1;
    int c;

    for (int i = 1; i < n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return a;
}

void bubble(std::vector<int>& v) {

    int lenght = v.size();

    for (int i = 0; i < lenght - 1; i++) {
        for (int j = lenght - 1; j > i; j--) {
            if (v[j - 1] > v[j]) {
                int t = v[j - 1];
                v[j - 1] = v[j];
                v[j] = t;
            }
        }
    }


}

int main()
{
    std::cout << "Hello, world!" << std::endl;

    std::cout << fib(10) << std::endl;

    std::vector<int> vec{ 6,2,1,4,5,6,9,12,3,1 };

    for (auto it = vec.begin(); it < vec.end(); it++)
        std::cout << *it << ' ';

    std::cout << std::endl;

    bubble(vec);

    for (auto it = vec.begin(); it < vec.end(); it++)
        std::cout << *it << ' ';

    return 0;
}

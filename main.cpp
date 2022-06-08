#include <iostream>
#include <vector>
using namespace std;

int fib(int x)
{
    int a = 0, b = 1, q;
    for (int i = 1; i < x; ++i) {
        q = b;
        b += a;
        a = q;
    }
    return a;
}

int main()
{
    std::cout << "Hello, world!" << std::endl;

    cout << fib(10) << endl;

    vector < int> v = { 6, 2, 1, 4, 5, 6, 9, 12, 3, 1 };
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << ' ';

    cout << endl;
    return 0;
}
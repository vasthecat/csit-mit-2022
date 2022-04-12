#include <iostream>

using namespace std;

int fib(int n)
{
    int a = 0, b = 1;
    for (int i = 0; i < n - 1; ++i)
    {
        int temp = b;
        b += a;
        a = temp;
    }
    return a;
}

int main()
{
    cout << "Hello, world!" << endl;
    cout << fib(10) << endl;
    return 0;
}

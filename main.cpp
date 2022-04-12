#include <iostream>
using namespace std;

int fib(int n){
    int x = 0, y = 1, z, r = 0;
    if (n == 1) return 0;
    else if (n == 2) return 1;
    else {
        for (int i = 2; i < n; ++i){
            z = x + y;
            r = z;
            x = y;
            y = z;
        }
        return r;
    }
}

int main()
{
    cout << "Hello, world!" << endl;
	cout << fib(10);
    return 0;
}